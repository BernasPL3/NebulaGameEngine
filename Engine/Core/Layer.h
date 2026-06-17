#pragma once

#include <string>

namespace Nebula
{
    class Layer
    {
    public:
        Layer(const std::string& name = "Layer");
        virtual ~Layer();

        virtual void OnAttach() {}
        virtual void OnDetach() {}
        virtual void OnUpdate() {}

    protected:
        std::string m_DebugName;
    };
}
