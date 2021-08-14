#include <bits/stdc++.h>
#include "Person.hpp"

using namespace std;
int main() {
    Info input = {firstname:"Hossam", phone:"01129000383", age:23};
    Person p1(input);

    input = {firstname:"Bibo", lastname:"Hussien", phone:"01068642735", age:22};
    Person p2(input);

    input = {firstname:"Sheirf", lastname:"Hassan", phone:"01112535401", age:52};
    Person p3(input);

    input = {firstname:"Loly", lastname:"Eloh", phone:"999382322", age:12};
    Person p4(input);

    p1.printInfo();
    p2.printInfo();
    p3.printInfo();
    p4.printInfo();

    cout<<Person::getTotalNumber();
}