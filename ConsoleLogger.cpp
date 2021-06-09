#include "ConsoleLogger.h"

//реализация метода лога в консоль
void ConsoleLogger::log(std::string message) {
    //получаем время
    std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    //выводим
    std::cout << getLevel() << ", " << std::ctime(&time) << '[' << std::endl;
    std::cout << "\t" << message << std::endl;
    std::cout << "]" << std::endl;
}
