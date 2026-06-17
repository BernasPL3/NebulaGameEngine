#include "Application.h"
#include "Window.h"

namespace Nebula
{
    Application::Application()
    {
        m_Window = std::make_unique<Window>("Nebula Engine");
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        while (m_Running)
        {
            m_Window->OnUpdate();
        }
    }
}
