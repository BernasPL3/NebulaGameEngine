#include "Entity.h"

namespace Nebula
{
    Entity::Entity()
    {
    }

    Entity::Entity(const std::string& name)
    {
        Tag.Tag = name;
    }
}
