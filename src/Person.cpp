#include <iostream>
#include "Person.hpp"
using namespace std;

/* Static variables */
int Person::totalNumber = 0;

/* constructors & Destructor */
Person::Person()
{   
    info = {};
    info.id = totalNumber;
    totalNumber++;   
}

Person::Person(Info info) : Person()
{   
    this->setInfo(info);
}

Person::~Person()
{
    totalNumber--;
}

/* Setters & Getters*/
int Person::getTotalNumber(){
    return totalNumber;
}

Info Person::getInfo(){
    return info;
}

string Person::getName(){
    return info.firstname+" "+info.lastname;
}

void Person::setInfo(Info info){
    int id = this->info.id;
    this->info = info;
    this->info.id = id;
}

/* Methods */
void Person::printInfo(){
    cout<<"ID: "<<info.id<<endl;
    cout<<"Name: "<< getName()<<" ("+to_string(info.age)+")"<<endl
    <<"Phone: "<<info.phone<<endl;
}




