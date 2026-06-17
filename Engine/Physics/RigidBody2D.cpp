#include "Rigidbody2D.h"

namespace Nebula
{
    void Rigidbody2D::AddForce(float x, float y)
    {
        VelocityX += x / Mass;
        VelocityY += y / Mass;
    }

    void Rigidbody2D::Update(float deltaTime)
    {
        if(IsStatic)
            return;

        PositionX += VelocityX * deltaTime;
        PositionY += VelocityY * deltaTime;
    }
}
