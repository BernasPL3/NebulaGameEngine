#pragma once

#include <string>
#include "TransformComponent.h"
#include "SpriteRendererComponent.h"
#include "CameraComponent.h"
#include "TagComponent.h"

namespace Nebula
{
    class Entity
    {
    public:
        Entity();
        Entity(const std::string& name);

        TransformComponent Transform;
        SpriteRendererComponent Sprite;
        CameraComponent Camera;
        TagComponent Tag;
    };
}
