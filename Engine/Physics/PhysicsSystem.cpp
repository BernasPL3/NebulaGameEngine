#include "PhysicsSystem.h"

namespace Nebula
{
    PhysicsWorld PhysicsSystem::s_World;

    void PhysicsSystem::Init()
    {
        s_World.SetGravity(
            0.0f,
            -9.81f
        );
    }

    PhysicsWorld&
    PhysicsSystem::GetWorld()
    {
        return s_World;
    }
}
