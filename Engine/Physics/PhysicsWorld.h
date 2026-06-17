#pragma once

#include <vector>

namespace Nebula
{
    class Rigidbody2D;

    class PhysicsWorld
    {
    public:
        void AddBody(Rigidbody2D* body);

        void SetGravity(
            float x,
            float y);

        void Step(float deltaTime);

    private:
        std::vector<Rigidbody2D*> m_Bodies;

        float m_GravityX = 0.0f;
        float m_GravityY = -9.81f;
    };
}
