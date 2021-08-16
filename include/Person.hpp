#pragma once
#include <string>
#include "InfoStruct.hpp"
using namespace std;

class Person
{ 
protected:
    Info info;
    static int totalNumber;

public:
    /* constructors & Destructor */
    Person();
    Person(Info info);
    ~Person();

    /* Setters & Getters*/
    static int getTotalNumber();
    Info getInfo();
    string getName();
    void setInfo(Info info);

    /* Methods */
    virtual void printInfo();
};