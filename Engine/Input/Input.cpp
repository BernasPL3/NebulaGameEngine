#include "Input.h"
#include <SDL2/SDL.h>

namespace Nebula
{
    bool Input::IsKeyPressed(int keycode)
    {
        const Uint8* state = SDL_GetKeyboardState(nullptr);
        return state[keycode];
    }

    bool Input::IsMouseButtonPressed(int button)
    {
        Uint32 state = SDL_GetMouseState(nullptr, nullptr);
        return state & SDL_BUTTON(button);
    }

    float Input::GetMouseX()
    {
        int x, y;
        SDL_GetMouseState(&x, &y);
        return (float)x;
    }

    float Input::GetMouseY()
    {
        int x, y;
        SDL_GetMouseState(&x, &y);
        return (float)y;
    }
}
