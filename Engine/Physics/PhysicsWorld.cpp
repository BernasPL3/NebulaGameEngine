#include "PhysicsWorld.h"
#include "Rigidbody2D.h"

namespace Nebula
{
    void PhysicsWorld::AddBody(
        Rigidbody2D* body)
    {
        m_Bodies.push_back(body);
    }

    void PhysicsWorld::SetGravity(
        float x,
        float y)
    {
        m_GravityX = x;
        m_GravityY = y;
    }

    void PhysicsWorld::Step(
        float deltaTime)
    {
        for(auto body : m_Bodies)
        {
            if(body->IsStatic)
                continue;

            body->VelocityX +=
                m_GravityX * deltaTime;

            body->VelocityY +=
                m_GravityY * deltaTime;

            body->Update(deltaTime);
        }
    }
}
