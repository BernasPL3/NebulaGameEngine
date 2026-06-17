#pragma once

namespace Nebula
{
    class IndexBuffer
    {
    public:
        IndexBuffer(unsigned int* indices, unsigned int count);
        ~IndexBuffer();

        void Bind();
        void Unbind();

    private:
        unsigned int m_RendererID;
        unsigned int m_Count;
    };
}
