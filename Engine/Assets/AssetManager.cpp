#include "AssetManager.h"

namespace Nebula
{
    std::unordered_map<
        AssetHandle,
        std::shared_ptr<Asset>
    > AssetManager::s_Assets;

    AssetHandle AssetManager::s_NextHandle = 1;

    AssetHandle AssetManager::RegisterAsset(
        std::shared_ptr<Asset> asset)
    {
        AssetHandle handle = s_NextHandle++;

        s_Assets[handle] = asset;

        return handle;
    }

    std::shared_ptr<Asset>
    AssetManager::GetAsset(
        AssetHandle handle)
    {
        return s_Assets[handle];
    }
}
