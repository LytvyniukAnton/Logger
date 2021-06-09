#include "ConsoleLoggerFactory.h"

//получаем конкретный логгер
Logger *ConsoleLoggerFactory::getLogger() {
    return new ConsoleLogger();
}
