#pragma once
#include "Person.hpp"
#include <string>

using namespace std;

class Teacher : Person
{
private:
    int salary;
    string major;
    static int totalNumber;

public:
    /* constructors & Destructor */
    Teacher();
    Teacher(Info info, int salary, string major);
    ~Teacher();

    /* Setters & Getters*/
    static int getTotalNumber();
    void setSalary(int salary);
    void setMajor(string major);
    int getSalary();
    string getMajor();

    /* Methods */
    void printInfo();
};