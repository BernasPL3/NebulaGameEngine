#pragma once

#include <vector>
#include "Layer.h"

namespace Nebula
{
    class LayerStack
    {
    public:
        void PushLayer(Layer* layer);
        void PopLayer(Layer* layer);

    private:
        std::vector<Layer*> m_Layers;
    };
}
