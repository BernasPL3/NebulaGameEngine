#include "TextureLoader.h"
#include <iostream>

namespace Nebula
{
    unsigned int TextureLoader::LoadTexture(
        const std::string& path)
    {
        std::cout
            << "Loading Texture: "
            << path
            << std::endl;

        return 0;
    }
}
