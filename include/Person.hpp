#pragma once
using namespace std;

struct Info
{
    string firstname, lastname="", phone="";
    int age, id=-1;
};

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
    void printInfo();
};