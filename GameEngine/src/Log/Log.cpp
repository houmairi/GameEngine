#include "Log.h"
#include "LoggerStorage.h"
#include "ConsoleLogger.h"

namespace GameEngine {

    Detail::LoggerStorage* Log::s_LoggerStorage = nullptr;

    void Log::Init() {
        s_LoggerStorage = new Detail::LoggerStorage();
        s_LoggerStorage->logger = std::make_unique<ConsoleLogger>();
    }

    void Log::Shutdown() {
        delete s_LoggerStorage;
        s_LoggerStorage = nullptr;
    }

    void Log::LogMessage(LogLevel level, const std::string& message) {
        if (s_LoggerStorage && s_LoggerStorage->logger) {
            s_LoggerStorage->logger->Log(level, message);
        }
    }

    void Log::Trace(const std::string& message) { LogMessage(LogLevel::Trace, message); }
    void Log::Info(const std::string& message) { LogMessage(LogLevel::Info, message); }
    void Log::Warning(const std::string& message) { LogMessage(LogLevel::Warning, message); }
    void Log::Error(const std::string& message) { LogMessage(LogLevel::Error, message); }
    void Log::Critical(const std::string& message) { LogMessage(LogLevel::Critical, message); }

}