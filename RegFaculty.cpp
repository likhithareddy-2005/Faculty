#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <vector>
#include "Person.h"
#include "Course.h"
#include "Faculty.h"
#include "RegFaculty.h"

using namespace std;

RegFaculty::RegFaculty(){
    advisees = nullptr;
}

RegFaculty::RegFaculty(unsigned int sad, string naam, persontype p, vector<Course> C, unsigned int jo, 
    unsigned int co, unsigned int S[], unsigned int nadv) : Faculty(sad, naam, p, C, jo, co){
    advisees = S;
    numadv = nadv;
}

// Checks if sid is stored in the advisees list
bool RegFaculty::isAdvisor(unsigned int sid){
    bool ans = false;

    for(int i=0; i<numadv; i++){
        if(advisees[i] == sid){
            ans = true;
            break;
        }
    }

    return ans;
}

unsigned int RegFaculty::NumAdvisees(){
    return numadv;
}

// Prints id, name, journals, conferences
// on one line separated by a space.
void RegFaculty::Print(){
    cout << GetId() << " " << GetName() << " " << GetJournals() << " " << GetConfs() << endl;
}

RegFaculty::~RegFaculty(){
    delete[] advisees;
}