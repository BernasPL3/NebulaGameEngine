#pragma once

#include <SDL2/SDL.h>

namespace Nebula
{
    class Gamepad
    {
    public:
        static bool IsConnected()
        {
            return SDL_NumJoysticks() > 0;
        }
    };
}
