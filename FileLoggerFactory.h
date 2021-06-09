#ifndef LOGGERAPP_FILELOGGERFACTORY_H
#define LOGGERAPP_FILELOGGERFACTORY_H

#include "LoggerFactory.h"
#include "FileLogger.h"

class FileLoggerFactory : public LoggerFactory {
private:
    std::string fileName;
public:
    FileLoggerFactory(std::string fileName = "log.txt");

    virtual Logger* getLogger();
};


#endif //LOGGERAPP_FILELOGGERFACTORY_H
