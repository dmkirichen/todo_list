#ifndef LIST_HPP
#define LIST_HPP

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/map.hpp>
#include <string>
#include <sstream>
#include <fstream>
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
    void saveToFile(std::string filename);
private:
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        ar & _curId;
        ar & _title;
        ar & _map;
    }
    uint16_t _curId;
    std::string _title;
    std::map<uint16_t, std::shared_ptr<Task>> _map{};
};

#endif