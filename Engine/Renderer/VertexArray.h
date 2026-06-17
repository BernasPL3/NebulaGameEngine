#pragma once

namespace Nebula
{
    class VertexArray
    {
    public:
        VertexArray();
        ~VertexArray();

        void Bind();
        void Unbind();

    private:
        unsigned int m_RendererID;
    };
}
