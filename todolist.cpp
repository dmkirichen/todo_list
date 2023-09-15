#include "todolist.h"

ToDoList::ToDoList(std::string title)
{
    _curId = 0;
    _title = title;
};

void ToDoList::addTask(std::shared_ptr<Task> taskPtr)
{
    _map[_curId] = taskPtr;
    _curId++;
};

void ToDoList::delTask(uint16_t id)
{
    _map.erase(id);
};

void ToDoList::completeTask(uint16_t id)
{
    if (_map.find(id) != _map.end())  // check if id is in _map
    {
        (*_map[id]).complete();
    }
};

std::string ToDoList::print()
{
    // TODO finish iterating on tasks
    std::stringstream s{};
    for (auto pair : _map)
    {
        s << pair[0] << ") " << pair[1] << "\n";
    }
    return s.str();
};