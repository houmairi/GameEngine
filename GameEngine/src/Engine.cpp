#include "Engine.h"

namespace GameEngine {
    bool Engine::Initialize() {
        Log::Init();
        GE_INFO("Engine Initialized!");
        return true;
    }

    void Engine::Update() {
        GE_TRACE("Engine Update");
    }

    void Engine::Shutdown() {
        GE_INFO("Engine Shutdown");
        Log::Shutdown();
    }
}