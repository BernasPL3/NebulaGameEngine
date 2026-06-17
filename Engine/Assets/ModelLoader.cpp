#include "ModelLoader.h"
#include <iostream>

namespace Nebula
{
    bool ModelLoader::LoadModel(
        const std::string& path)
    {
        std::cout
            << "Loading Model: "
            << path
            << std::endl;

        return true;
    }
}
