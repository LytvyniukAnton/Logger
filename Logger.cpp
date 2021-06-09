#include "Logger.h"

Logger::Logger(int level) {
    this->level = level;
}

int Logger::getLevel() {
    return level;
}

void Logger::setLevel(int level) {
    this->level = level;
}
