#ifndef LOGGERAPP_FILELOGGER_H
#define LOGGERAPP_FILELOGGER_H

#include "Logger.h"
#include <fstream>
#include <chrono>
#include <ctime>

class FileLogger : public Logger{
private:
    std::string fileName;//имя файла
    std::ofstream file;//файл
public:
    FileLogger(std::string fileName = "log.txt", int level = 1);
    virtual ~FileLogger();

    virtual void log(std::string message);
};


#endif //LOGGERAPP_FILELOGGER_H
