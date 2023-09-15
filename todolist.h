#ifndef LIST_HPP
#define LIST_HPP

#include <string>
#include <sstream>
#include <map>
#include <memory>
#include "stdint.h"
#include "task.h"

class ToDoList
{
public:
    ToDoList(std::string title);
    void addTask(std::shared_ptr<Task> t);
    void delTask(uint16_t id);
    void completeTask(uint16_t id);
    std::string print();
    std::string getTitle();
private:
    uint16_t _curId;
    std::string _title;
    std::map<uint16_t, std::shared_ptr<Task>> _map{};
};

#endif