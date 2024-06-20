#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <vector>
#include "Person.h"
#include "Course.h"
#include "Faculty.h"
#include "VisFaculty.h"

using namespace std;

VisFaculty::VisFaculty(){}

VisFaculty::VisFaculty(unsigned int sad, string naam, persontype p, vector<Course> C, 
    unsigned int jo, unsigned int co, unsigned int h) : Faculty(sad, naam, p, C, jo, co){
    host = h;
}

unsigned int VisFaculty::GetHost(){
    return host;
}

void VisFaculty::SetHost(unsigned int h){
    host = h;
}

// Prints id, name, journals, conferences, host
// on one line separated by a space.
void VisFaculty::Print(){
    cout << GetId() << " " << GetName() << " " << GetJournals() << " " << GetConfs() << " " << host << endl;
}

VisFaculty::~VisFaculty(){}