#pragma once

#include <vector>
#include "Entity.h"

namespace Nebula
{
    class Scene
    {
    public:
        Entity& CreateEntity(const std::string& name);

        void OnUpdate();

    private:
        std::vector<Entity> m_Entities;
    };
}
