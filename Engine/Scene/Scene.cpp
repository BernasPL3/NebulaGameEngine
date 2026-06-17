#include "Scene.h"

namespace Nebula
{
    Entity& Scene::CreateEntity(const std::string& name)
    {
        m_Entities.emplace_back(name);
        return m_Entities.back();
    }

    void Scene::OnUpdate()
    {
        for(auto& entity : m_Entities)
        {
        }
    }
}
