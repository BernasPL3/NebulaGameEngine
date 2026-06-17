#pragma once

#include "Application.h"

extern Nebula::Application* CreateApplication();

int main()
{
    auto app = CreateApplication();
    app->Run();

    delete app;

    return 0;
}
