#include "RendererAPI.h"

#ifdef __APPLE__
#include <OpenGL/gl3.h>
#else
#include <glad/glad.h>
#endif

namespace Nebula
{
    void RendererAPI::Init()
    {
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    }

    void RendererAPI::SetViewport(
        unsigned int x,
        unsigned int y,
        unsigned int width,
        unsigned int height)
    {
        glViewport(x, y, width, height);
    }

    void RendererAPI::SetClearColor(
        float r,
        float g,
        float b,
        float a)
    {
        glClearColor(r, g, b, a);
    }

    void RendererAPI::Clear()
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }
}
