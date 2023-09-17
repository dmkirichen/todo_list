#include "task.h"

Task::Task(std::string text)
{
    _text = text;
};

void Task::complete()
{
    _ready = true;
};

std::string Task::getText()
{
    return _text;
};

bool Task::isReady()
{
    return _ready;
};