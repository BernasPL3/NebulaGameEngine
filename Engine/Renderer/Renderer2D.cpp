#include "Renderer2D.h"
#include <iostream>

namespace Nebula
{
    void Renderer2D::Init()
    {
    }

    void Renderer2D::DrawQuad(
        float x,
        float y,
        float width,
        float height)
    {
        std::cout
            << "DrawQuad: "
            << x << ", "
            << y << ", "
            << width << ", "
            << height
            << std::endl;
    }
}
