#include "OrthographicCamera.h"

namespace Nebula
{
    OrthographicCamera::OrthographicCamera(
        float left,
        float right,
        float bottom,
        float top)
    {
    }

    void OrthographicCamera::SetPosition(
        float x,
        float y,
        float z)
    {
        m_X = x;
        m_Y = y;
        m_Z = z;
    }
}
