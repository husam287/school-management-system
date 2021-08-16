#include "Teacher.hpp"
#include <iostream>

/* Static variables */
int Teacher::totalNumber = 0;

/* constructors & Destructor */
Teacher::Teacher() : Person()
{
    salary = 0;
    major = "None";
    totalNumber++;
}

Teacher::Teacher(Info info, int salary, string major) :Person(info)
{   
    totalNumber++;
    this->salary = salary;
    this->major = major;
}

Teacher::~Teacher()
{
    totalNumber--;
}

/* Setters & Getters*/
int Teacher::getTotalNumber(){
    return totalNumber;
}

void Teacher::setSalary(int salary)
{
    this->salary = salary;
}

void Teacher::setMajor(string major)
{
    this->major = major;
}

int Teacher::getSalary()
{
    return salary;
}

string Teacher::getMajor()
{
    return major;
}

/* Methods */
void Teacher::printInfo()
{
    Person::printInfo();
    cout << "Salary: " << salary << " | "
         << "Major: " << major << endl;
}