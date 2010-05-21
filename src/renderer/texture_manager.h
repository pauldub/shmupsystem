#include "texture.h"

namespace Renderer
{
    class TextureManager {
        public:
            TextureManager();
            ~TextureManager();

            uint load_texture_from_file(std::string filename);
            uint load_texture_from_memory(SDL_Surface* surface, std::string filename = "");
        private:
            std::map<uint, texture> textures;
            std::map<uint, texture_section> texture_sections;

    };
}
