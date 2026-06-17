#include "Music.h"
#include <iostream>

namespace Nebula
{
    Music::Music(
        const std::string& path)
        : m_Path(path)
    {
    }

    void Music::Play()
    {
        std::cout
            << "[Music] Play: "
            << m_Path
            << std::endl;
    }

    void Music::Pause()
    {
        std::cout
            << "[Music] Pause"
            << std::endl;
    }

    void Music::Stop()
    {
        std::cout
            << "[Music] Stop"
            << std::endl;
    }
}
