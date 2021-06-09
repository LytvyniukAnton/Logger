#ifndef LOGGERAPP_CONSOLELOGGER_H
#define LOGGERAPP_CONSOLELOGGER_H

#include "Logger.h"
#include <iostream>
#include <chrono>
#include <ctime>

class ConsoleLogger : public Logger{ //наследуем логгер
public:
    ConsoleLogger(int level = 1) : Logger(level) {};

    virtual void log(std::string message); //реализация абстрактного метода
};


#endif //LOGGERAPP_CONSOLELOGGER_H
