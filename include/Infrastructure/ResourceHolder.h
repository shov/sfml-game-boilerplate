/**
 *  Load, hold and provide with access to resources
 *  as textures, sounds, fonts and shaders
 */

#ifndef SFML_GAME_BOILERPLATE_RESOURCEHOLDER_H
#define SFML_GAME_BOILERPLATE_RESOURCEHOLDER_H

#include <string>
#include <map>

template<typename Resource, typename Identifier>
class ResourceHolder {
public:
    /**
     * Load a resource as texture / font / sound
     * @param id
     * @param fileName
     */
    void load(Identifier id, const std::string &fileName);

    /**
     * Load a resource as shader / piece of a texture
     * @tparam Parameter
     * @param id
     * @param filename
     * @param secondParam
     */
    template<typename Parameter>
    void load(Identifier id, const std::string &fileName, Parameter &secondParam);

    /**
     * Get a resource by id
     * @param id
     * @return
     */
    Resource& get(Identifier id);
    const Resource& get(Identifier id) const;

private:
    std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};


#endif //SFML_GAME_BOILERPLATE_RESOURCEHOLDER_H
