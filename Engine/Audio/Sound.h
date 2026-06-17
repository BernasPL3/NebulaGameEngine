#pragma once

#include <string>

namespace Nebula
{
    class Sound
    {
    public:
        Sound(const std::string& path);

        void Play();
        void Stop();

    private:
        std::string m_Path;
    };
}
