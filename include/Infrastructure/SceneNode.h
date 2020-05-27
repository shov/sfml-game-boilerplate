/**
 * A node to build scene node tree
 */

#ifndef SFML_GAME_BOILERPLATE_SCENENODE_H
#define SFML_GAME_BOILERPLATE_SCENENODE_H

#include <vector>
#include <SFML/Graphics.hpp>

class SceneNode : public sf::Transformable, public sf::Drawable,
                  private sf::NonCopyable {
public:
    typedef std::unique_ptr<SceneNode> SceneNode_U;
public:
    SceneNode();

    /**
     * Attach a child node
     * @param child
     */
    void attachChild(SceneNode_U child);

    /**
     * Detach a child node
     * @param child
     * @return a pointer to detached child
     */
    SceneNode_U detachChild(const SceneNode &child);

private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

    virtual void drawCurrent(sf::RenderTarget &target, sf::RenderStates states) const;

    void drawChildren(sf::RenderTarget &target, sf::RenderStates states) const;

private:
    std::vector<SceneNode_U> mChildren;
    SceneNode *mParent;
};

#endif //SFML_GAME_BOILERPLATE_SCENENODE_H
