#pragma once
using namespace std;
class Product
{
private:
    int id;
    string name;
    string description;
    long price;

public:
    Product(int id, string name, string description, long price)
    {
        this->id = id;
        this->name = name;
        this->description = description;
        this->price = price;
    }
    void setId(int id)
    {
        this->id;
    }
    int getId() const
    {
        return id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName() const
    {
        return name;
    }
    void setDescription(string description)
    {
        this->description = description;
    }
    string getDescription() const
    {
        return description;
    }
    void setPrice(long price)
    {
        this->price = price;
    }
    long getPrice() const
    {
        return price;
    }
};
