#pragma once

namespace Nebula
{
    class OrthographicCamera
    {
    public:
        OrthographicCamera(
            float left,
            float right,
            float bottom,
            float top
        );

        void SetPosition(
            float x,
            float y,
            float z
        );

    private:
        float m_X = 0.0f;
        float m_Y = 0.0f;
        float m_Z = 0.0f;
    };
}
