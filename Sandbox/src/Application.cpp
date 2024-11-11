#include "Engine.h"

int main() {
    GameEngine::Engine engine;

    if (engine.Initialize()) {
        engine.Update();
        engine.Shutdown();
    }

    return 0;
}