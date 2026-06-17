#pragma once

#include <string>

namespace Nebula
{
    class Texture2D
    {
    public:
        Texture2D(const std::string& path);

        void Bind(unsigned int slot = 0);

    private:
        unsigned int m_TextureID = 0;
    };
}
