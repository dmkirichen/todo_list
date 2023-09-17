#include "todolist.h"

ToDoList::ToDoList(std::string title)
{
    _curId = 1;
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
    std::stringstream s{};
    for (auto pair : _map)
    {
        s << pair.first << ") " << (*(pair.second)).getText() << "\n";
    }
    return s.str();
};

std::string ToDoList::getTitle()
{
    return _title;
};