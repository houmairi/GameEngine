#pragma once
#include "Log/Log.h"

#ifdef GAMEENGINE_EXPORTS
#define GAMEENGINE_API __declspec(dllexport)
#else
#define GAMEENGINE_API __declspec(dllimport)
#endif

namespace GameEngine {
    class GAMEENGINE_API Engine {
    public:
        bool Initialize();
        void Update();
        void Shutdown();
    };
}