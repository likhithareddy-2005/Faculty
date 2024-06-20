#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(){}

// assigned respectively
Person::Person(unsigned int sad, string naam, persontype p){
    sadhar = sad;
    name = naam;
    ptype = p;
}

string Person::GetName(){
    return name;
}

void Person::SetName(string naam){
    name = naam;
}

persontype Person::GetPType(){
    return ptype;
}

void Person::SetPType(persontype p){
    ptype = p;
}

unsigned int Person::GetId(){
    return sadhar;
}

void Person::SetId(unsigned int sad){
    sadhar = sad;
}

// Prints id and name separated by a blank space on
// one line.
void Person::Print(){
    cout << sadhar << " " << name << endl;
}

Person::~Person(){}