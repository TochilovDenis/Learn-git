#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
using namespace std;

enum LogLevel {
    INFO,
    DEBUG
};

class Logger {
private:
    static Logger* instance;
    LogLevel level;

    Logger(LogLevel level) : level(level) {}

public:
    static Logger* getLogger();

    void setLevel(LogLevel level);

    void info(const std::string& message);
    void debug(const std::string& message);
};

#endif // LOGGER_H
