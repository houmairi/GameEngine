#pragma once
#include "Log.h"
#include <mutex>

namespace GameEngine {

    class ConsoleLogger : public ILogger {
    public:
        virtual void Log(LogLevel level, const std::string& message) override;

    private:
        std::mutex m_Mutex;
        const char* GetColorCode(LogLevel level);
        const char* GetLevelString(LogLevel level);
    };

}