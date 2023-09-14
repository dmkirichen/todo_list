#ifndef LIST_HPP
#define LIST_HPP

#include <string>
#include <map>
#include "stdint.h"
#include "task.h"

class ToDoList
{
public:
    ToDoList();
    void addTask(const Task& t);
    void delTask(uint16_t id);
    void completeTask(uint16_t id);
    std::string getTitle();
private:
    uint16_t _curId;
    std::string _title;
    std::map<uint16_t, Task> _map{};
};

#endif