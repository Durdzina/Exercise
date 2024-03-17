#pragma once
#include <string>
using namespace std;
class Product
{
private:
    int id;
    string name;
    string description;
    long price;

public:
    string toString()
    {
        return "ID:" + to_string(id) + ", name:" + name + ", description:" + description + ", price:" + to_string(price);
    }
    Product(int id, string name, string description, long price)
    {
        this->id = id;
        this->name = name;
        this->description = description;
        this->price = price;
    }
    int getId() const
    {
        return id;
    }
    
};
