#include "Infrastructure/ResourceHolder.h"

template<typename Resource, typename Identifier>
void ResourceHolder<Resource, Identifier>::load(Identifier id, const std::string &fileName) {
    std::unique_ptr<Resource> resource(new Resource());

    if (!resource->loadFromFile(fileName)) {
        throw std::runtime_error("ResourceHolder::load failed to load: " + fileName);
    }

    auto inserted = mResourceMap.insert(std::make_pair(id, std::move(resource)));
    assert(inserted.second);
}

template<typename Resource, typename Identifier>
template<typename Parameter>
void ResourceHolder<Resource, Identifier>::load(Identifier id, const std::string &fileName, Parameter &secondParam) {
    std::unique_ptr<Resource> resource(new Resource());

    if (!resource->loadFromFile(fileName, secondParam)) {
        throw std::runtime_error("ResourceHolder::load failed to load: " + fileName);
    }

    auto inserted = mResourceMap.insert(std::make_pair(id, std::move(resource)));
    assert(inserted.second);
}

template<typename Resource, typename Identifier>
Resource& ResourceHolder<Resource, Identifier>::get(Identifier id) {
    auto found = mResourceMap.find(id);
    assert(found != mResourceMap.end());

    return *found->second;
}

template<typename Resource, typename Identifier>
const Resource& ResourceHolder<Resource, Identifier>::get(Identifier id) const {
    return get(id);
}