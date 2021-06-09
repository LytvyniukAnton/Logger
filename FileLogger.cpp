#include "FileLogger.h"

//реализация конструкторв
FileLogger::FileLogger(std::string fileName,int level) : Logger(level) {
    this->fileName = fileName; //записываем имя файла
    file.open(fileName);//открываем файл
}

//
FileLogger::~FileLogger() {
    file.close(); //при удалении обьекта - закрываем файл
}

//метод лога
void FileLogger::log(std::string message) {
    std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    file << getLevel() << ", " << std::ctime(&time) << '[' << std::endl;
    file << "\t" << message << std::endl;
    file << "]" << std::endl;
}


