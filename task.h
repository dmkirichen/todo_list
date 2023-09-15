#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class Task
{
public:
    Task(std::string text);
    void complete();
private:
    bool _ready = false;
    std::string _text = "";
};

#endif