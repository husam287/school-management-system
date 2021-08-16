#include <bits/stdc++.h>
#include "Person.hpp"
#include "Teacher.hpp"
using namespace std;

int main() {
    Info input = {firstname:"Hossam", phone:"01129000383", age:23};
    Teacher p1(input,2500,"Math");

    input = {firstname:"Bibo", lastname:"Hussien", phone:"01068642735", age:22};
    Teacher p2(input,2500,"Arabic");

    input = {firstname:"Sheirf", lastname:"Hassan", phone:"01112535401", age:52};
    Teacher p3(input,2500,"English");

    input = {firstname:"Loly", lastname:"Eloh", phone:"999382322", age:12};
    Teacher p4(input,2500,"History");

    Person p5(input);

    p1.printInfo();
    p2.printInfo();
    p3.printInfo();
    p4.printInfo();
    p5.printInfo();

    cout<<Teacher::getTotalNumber();
    cout<<Person::getTotalNumber();

}