#pragma once

#include <string>

struct SDL_Window;

namespace Nebula
{
    class Window
    {
    public:
        Window(const std::string& title);
        ~Window();

        void OnUpdate();

    private:
        SDL_Window* m_Window = nullptr;
    };
}
