#ifndef LOGGERAPP_CONSOLELOGGERFACTORY_H
#define LOGGERAPP_CONSOLELOGGERFACTORY_H

#include "LoggerFactory.h"
#include "ConsoleLogger.h"

//фабрика консольного логгера
class ConsoleLoggerFactory : public LoggerFactory {
public:
    virtual Logger* getLogger();
};


#endif //LOGGERAPP_CONSOLELOGGERFACTORY_H
