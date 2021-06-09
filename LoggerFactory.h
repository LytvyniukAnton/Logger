#ifndef LOGGERAPP_LOGGERFACTORY_H
#define LOGGERAPP_LOGGERFACTORY_H

#include "Logger.h"

//фабрика для логгера
class LoggerFactory {
public:
    virtual ~LoggerFactory() {}
    virtual Logger* getLogger() = 0;
};


#endif //LOGGERAPP_LOGGERFACTORY_H
