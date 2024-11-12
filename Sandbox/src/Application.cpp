#include "Engine.h"

int main() {
    GameEngine::Engine engine;

    if (engine.Initialize()) {
        GE_INFO("Sandbox application started");
        GE_WARN("This is a warning message");
        engine.Update();
        GE_ERROR("This is an error message");
        engine.Shutdown();
    }

    return 0;
}