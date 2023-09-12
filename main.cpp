#include "task.hpp"
#include "list.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    List list{};
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
            std::cout << "You've run [add] command" << std::endl;
        } else if (command == "do")
        {
            std::cout << "You've run [do] command" << std::endl;
        } else if (command == "delete")
        {
            std::cout << "You've run [delete] command" << std::endl;
        } else if (command == "exit")
        {
            std::cout << "Shutting the program..." << std::endl;
            break;
        } else {
            std::cout << "Please use one of the available commands" << std::endl;
        }
    }
}