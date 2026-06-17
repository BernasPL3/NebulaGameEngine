#include "Renderer.h"
#include "RendererAPI.h"

namespace Nebula
{
    void Renderer::Init()
    {
        RendererAPI::Init();
    }

    void Renderer::BeginFrame()
    {
        RendererAPI::Clear();
    }

    void Renderer::EndFrame()
    {
    }
}
