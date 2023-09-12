#ifndef TASK_HPP
#define TASK_HPP

#include <string>
#include "stdint.h"

class Task
{
private:
    uint16_t id = 0;
    bool ready = false;
    std::string text = "";
};

#endif