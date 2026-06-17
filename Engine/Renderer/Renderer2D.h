#pragma once

namespace Nebula
{
    class Renderer2D
    {
    public:
        static void Init();

        static void DrawQuad(
            float x,
            float y,
            float width,
            float height
        );
    };
}
