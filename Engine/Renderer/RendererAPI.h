#pragma once

namespace Nebula
{
    class RendererAPI
    {
    public:
        static void Init();
        static void SetViewport(
            unsigned int x,
            unsigned int y,
            unsigned int width,
            unsigned int height
        );

        static void SetClearColor(
            float r,
            float g,
            float b,
            float a
        );

        static void Clear();
    };
}
