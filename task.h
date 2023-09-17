#ifndef TASK_HPP
#define TASK_HPP

#include <string>

class Task
{
public:
    Task(std::string text);
    std::string getText();
    void complete();
    bool isReady();
private:
    bool _ready = false;
    std::string _text = "";
};

#endif