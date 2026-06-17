#pragma once

namespace Nebula
{
    class Input
    {
    public:
        static bool IsKeyPressed(int keycode);

        static bool IsMouseButtonPressed(int button);

        static float GetMouseX();
        static float GetMouseY();
    };
}
