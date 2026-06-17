#pragma once

#include <string>

namespace Nebula
{
    class Music
    {
    public:
        Music(const std::string& path);

        void Play();
        void Pause();
        void Stop();

    private:
        std::string m_Path;
    };
}
