#pragma once

#include <string>

namespace Nebula
{
    class Shader
    {
    public:
        Shader(
            const std::string& vertexPath,
            const std::string& fragmentPath
        );

        void Bind();
        void Unbind();

    private:
        unsigned int m_RendererID = 0;
    };
}
