#pragma once

namespace Nebula
{
    class VertexBuffer
    {
    public:
        VertexBuffer(float* vertices, unsigned int size);
        ~VertexBuffer();

        void Bind();
        void Unbind();

    private:
        unsigned int m_RendererID;
    };
}
