#pragma once

namespace Nebula
{
    class Rigidbody2D
    {
    public:
        float PositionX = 0.0f;
        float PositionY = 0.0f;

        float VelocityX = 0.0f;
        float VelocityY = 0.0f;

        float Mass = 1.0f;

        bool IsStatic = false;

        void AddForce(float x, float y);
        void Update(float deltaTime);
    };
}
