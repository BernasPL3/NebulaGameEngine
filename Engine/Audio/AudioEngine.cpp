#include "AudioEngine.h"
#include <iostream>

namespace Nebula
{
    bool AudioEngine::Init()
    {
        std::cout
            << "[Audio] Initialized"
            << std::endl;

        return true;
    }

    void AudioEngine::Shutdown()
    {
        std::cout
            << "[Audio] Shutdown"
            << std::endl;
    }
}
