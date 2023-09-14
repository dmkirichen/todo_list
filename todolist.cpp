#include "todolist.h"

ToDoList::ToDoList()
{
};

void ToDoList::addTask(const Task& task)
{
    _map[_curId] = task;
    _curId++;
};

void ToDoList::delTask(uint16_t id)
{
    _map.erase(id);
}

void ToDoList::completeTask(uint16_t id)
{
    
}