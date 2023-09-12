#ifndef LIST_HPP
#define LIST_HPP

#include <string>
#include <list>
#include <map>
#include "stdint.h"
#include "task.hpp"

class List
{
public:
    void addTask(const Task& t);
    void delTask(uint16_t id);
    void completeTask(uint16_t id);
private:
    std::string title;
    // Should I use list or map? (i feel like map is more suiting)
    std::list<Task> list{};
    std::map<uint16_t, Task> map{};
};

#endif