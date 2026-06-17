#pragma once

#include <string>

namespace Nebula
{
    class ModelLoader
    {
    public:
        static bool LoadModel(
            const std::string& path);
    };
}
