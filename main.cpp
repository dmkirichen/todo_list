#include "task.h"
#include "todolist.h"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    ToDoList todoList{};
    std::string command;

    while (true) // for now we will have cli control over the list
    {
        std::cout << ">> ";
        std::cin >> command;

        if (command == "help")
        {
            std::cout << "Possible commands are [help, add, do, delete, exit]" << std::endl;
        } else if (command == "add")
        {
            std::cout << "You've run [add] command, describe your task:" << std::endl;
            std::string taskText;
            std::cin >> taskText;
            Task t = Task(taskText);
            todoList.addTask(t);
        } else if (command == "do")
        {
            std::cout << "You've run [do] command, type the id of the task:" << std::endl;
            std::string idStr;
            std::cin >> idStr;
            uint16_t id = (uint16_t) strtoul(idStr.c_str(), NULL, 0);
            todoList.completeTask(id);
        } else if (command == "delete")
        {
            std::cout << "You've run [delete] command, type the id of the task:" << std::endl;
            std::string idStr;
            std::cin >> idStr;
            uint16_t id = (uint16_t) strtoul(idStr.c_str(), NULL, 0);
            todoList.delTask(id);
        } else if (command == "exit")
        {
            std::cout << "Shutting the program..." << std::endl;
            break;
        } else {
            std::cout << "Please use one of the available commands" << std::endl;
        }
    }
}