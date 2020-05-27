#include "Infrastructure/SceneNode.h"

SceneNode::SceneNode() : mParent(nullptr), mChildren() {}

void SceneNode::attachChild(SceneNode_U child) {
    child->mParent = this;
    mChildren.push_back(std::move(child));
}

SceneNode_U SceneNode::detachChild(const SceneNode &node) {
    auto found = std::find_if(mChildren.begin(), mChildren.end(),
                              [&node](SceneNode_U &storedNode) -> bool {
                                  return storedNode.get() == &node;
                              });
    assert(found != mChildren.end());

    SceneNode_U result = std::move(*found);
    result->mParent = nullptr;
    mChildren.erase(found);
    return result;
}

void SceneNode::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();

    drawCurrent(target, states);
    drawChildren(target, states);
}

void SceneNode::drawChildren(sf::RenderTarget &target, sf::RenderStates states) const {
    for (const SceneNode_U child : mChildren) {
        child->draw(target, states);
    }
}