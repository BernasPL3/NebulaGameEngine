#include "Window.h"

#include <SDL2/SDL.h>
#include <iostream>

namespace Nebula
{
    Window::Window(const std::string& title)
    {
        SDL_Init(SDL_INIT_VIDEO);

        m_Window = SDL_CreateWindow(
            title.c_str(),
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            1280,
            720,
            SDL_WINDOW_SHOWN
        );

        std::cout << "Window Created\n";
    }

    Window::~Window()
    {
        SDL_DestroyWindow(m_Window);
        SDL_Quit();
    }

    void Window::OnUpdate()
    {
        SDL_Event event;

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
            }
        }
    }
}
