#include "task.h"

Task::Task(std::string text)
{
    _text = text;
};

void Task::complete()
{
    _ready = true;
};