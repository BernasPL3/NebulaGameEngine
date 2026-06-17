#pragma once

#include "AssetTypes.h"
#include <string>

namespace Nebula
{
    class Asset
    {
    public:
        virtual ~Asset() = default;

        virtual AssetType GetType() const = 0;

        std::string Path;
    };
}
