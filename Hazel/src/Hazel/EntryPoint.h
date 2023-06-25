#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int agrc, char** argv) 
{
    Hazel::Log::Init();
    HZ_CORE_WARN("init engine");
    int a = 5;
    HZ_INFO("hello: {0}", a);
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}

#endif