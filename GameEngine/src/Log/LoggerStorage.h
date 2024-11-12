#pragma once
#include "Log.h"
#include <memory>

namespace GameEngine {
    namespace Detail {

        class LoggerStorage {
        public:
            std::unique_ptr<ILogger> logger;
        };

    } 
} 