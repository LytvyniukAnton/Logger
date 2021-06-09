#ifndef LOGGERAPP_LOGGER_H
#define LOGGERAPP_LOGGER_H

#include <string>

class Logger {//абстрактный логгер
private:
    int level;//уровень лога
public:
    Logger(int level = 1);
    virtual ~Logger() {};

    virtual void log(std::string message) = 0; //метод лога (наследник обязательно должен его реализовать)

    int getLevel(); //геттер и сеттор для уровня
    void setLevel(int level);
};


#endif
