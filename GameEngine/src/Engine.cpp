#include "Engine.h"
#include <stdio.h>

namespace GameEngine {
    bool Engine::Initialize() {
        printf("Engine Initialized!\n");
        return true;
    }

    void Engine::Update() {
        printf("Engine Update\n");
    }

    void Engine::Shutdown() {
        printf("Engine Shutdown\n");
    }
}