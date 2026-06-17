#pragma once

#include "PhysicsWorld.h"

namespace Nebula
{
    class PhysicsSystem
    {
    public:
        static void Init();

        static PhysicsWorld&
        GetWorld();

    private:
        static PhysicsWorld s_World;
    };
}
