#include <iostream>
#include "ConsoleLoggerFactory.h"
#include "FileLoggerFactory.h"

using namespace std;

int main() {
    LoggerFactory* loggerFactory = new ConsoleLoggerFactory(); //создаем консольную фабрику
    Logger* logger = loggerFactory->getLogger();//создаем консольный логгер

    logger->log("Testing log in console!"); //лог
    logger->log("Looks, it works!");

    delete loggerFactory;
    delete logger;

    loggerFactory = new FileLoggerFactory(); //аналогично но с файлом
    logger = loggerFactory->getLogger();

    logger->log("Testing log in file!");
    logger->log("Looks, it works!");

    delete loggerFactory;
    delete logger;

    system("pause");
    return 0;
}
