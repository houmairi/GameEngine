// GameEngine/src/Log/Log.h
#pragma once
#include <memory>
#include <string>

#ifdef GAMEENGINE_EXPORTS
#define GAMEENGINE_API __declspec(dllexport)
#else
#define GAMEENGINE_API __declspec(dllimport)
#endif

namespace GameEngine {

    enum class LogLevel {
        Trace,
        Info,
        Warning,
        Error,
        Critical
    };

    class GAMEENGINE_API ILogger {
    public:
        virtual ~ILogger() = default;
        virtual void Log(LogLevel level, const std::string& message) = 0;
    };

    // Forward declare the implementation details
    namespace Detail {
        class LoggerStorage;
    }

    class GAMEENGINE_API Log {
    public:
        // Delete constructors - this is a static-only class
        Log() = delete;
        Log(const Log&) = delete;
        Log& operator=(const Log&) = delete;

        static void Init();
        static void Shutdown();

        static void Trace(const std::string& message);
        static void Info(const std::string& message);
        static void Warning(const std::string& message);
        static void Error(const std::string& message);
        static void Critical(const std::string& message);

    private:
        static void LogMessage(LogLevel level, const std::string& message);
        static Detail::LoggerStorage* s_LoggerStorage;
    };

    // Convenience macros
#define GE_TRACE(...)    ::GameEngine::Log::Trace(__VA_ARGS__)
#define GE_INFO(...)     ::GameEngine::Log::Info(__VA_ARGS__)
#define GE_WARN(...)     ::GameEngine::Log::Warning(__VA_ARGS__)
#define GE_ERROR(...)    ::GameEngine::Log::Error(__VA_ARGS__)
#define GE_CRITICAL(...) ::GameEngine::Log::Critical(__VA_ARGS__)

}