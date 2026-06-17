#pragma once

#include <string>

namespace Nebula
{
    class TextureLoader
    {
    public:
        static unsigned int LoadTexture(
            const std::string& path);
    };
}
