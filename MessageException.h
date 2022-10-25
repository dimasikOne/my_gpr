#pragma once
#include <exception>
#include <string>

class MessageException : std::exception {
public:
    std::string message_exception;
    MessageException(std::string&& message): message_exception(message){}
};
