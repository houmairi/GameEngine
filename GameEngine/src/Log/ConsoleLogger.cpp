#include "ConsoleLogger.h"
#include <iostream>
#include <ctime>
#include <iomanip>

namespace GameEngine {

    void ConsoleLogger::Log(LogLevel level, const std::string& message) {
        std::lock_guard<std::mutex> lock(m_Mutex);

        // Get current time
        auto now = std::chrono::system_clock::now();
        auto time = std::chrono::system_clock::to_time_t(now);

        // Using localtime_s for safety
        struct tm timeInfo;
        localtime_s(&timeInfo, &time);

        std::cout << GetColorCode(level)
            << "[" << std::put_time(&timeInfo, "%H:%M:%S") << "] "
            << "[" << GetLevelString(level) << "]: "
            << message
            << "\033[0m" << std::endl;
    }

    const char* ConsoleLogger::GetColorCode(LogLevel level) {
        switch (level) {
        case LogLevel::Trace:    return "\033[37m"; // White
        case LogLevel::Info:     return "\033[32m"; // Green
        case LogLevel::Warning:  return "\033[33m"; // Yellow
        case LogLevel::Error:    return "\033[31m"; // Red
        case LogLevel::Critical: return "\033[35m"; // Magenta
        default:                 return "\033[0m";  // Reset
        }
    }

    const char* ConsoleLogger::GetLevelString(LogLevel level) {
        switch (level) {
        case LogLevel::Trace:    return "TRACE";
        case LogLevel::Info:     return "INFO";
        case LogLevel::Warning:  return "WARN";
        case LogLevel::Error:    return "ERROR";
        case LogLevel::Critical: return "CRITICAL";
        default:                 return "UNKNOWN";
        }
    }

}