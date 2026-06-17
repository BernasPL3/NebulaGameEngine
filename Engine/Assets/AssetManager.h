#pragma once

#include <unordered_map>
#include <memory>
#include "Asset.h"
#include "AssetHandle.h"

namespace Nebula
{
    class AssetManager
    {
    public:
        static AssetHandle RegisterAsset(
            std::shared_ptr<Asset> asset);

        static std::shared_ptr<Asset>
        GetAsset(AssetHandle handle);

    private:
        static std::unordered_map<
            AssetHandle,
            std::shared_ptr<Asset>
        > s_Assets;

        static AssetHandle s_NextHandle;
    };
}
