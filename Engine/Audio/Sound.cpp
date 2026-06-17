#include "Sound.h"
#include <iostream>

namespace Nebula
{
    Sound::Sound(
        const std::string& path)
        : m_Path(path)
    {
    }

    void Sound::Play()
    {
        std::cout
            << "[Sound] Play: "
            << m_Path
            << std::endl;
    }

    void Sound::Stop()
    {
        std::cout
            << "[Sound] Stop: "
            << m_Path
            << std::endl;
    }
}
