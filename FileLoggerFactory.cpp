#include "FileLoggerFactory.h"

FileLoggerFactory::FileLoggerFactory(std::string fileName) {
    this->fileName = fileName;
}

Logger *FileLoggerFactory::getLogger() {
    return new FileLogger(fileName);
}
