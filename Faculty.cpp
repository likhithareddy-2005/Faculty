#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <vector>
#include "Person.h"
#include "Course.h"
#include "Faculty.h"

using namespace std;

Faculty::Faculty(){}

// Assigned respectively.
// gradepoint field is set to 0 for Faculty's Course objects
// and is not used.
Faculty::Faculty(unsigned int sad, string naam, persontype p, vector<Course> C, unsigned int jo, unsigned int co): Person(sad, naam, p){
    CoursesTaught = C;
    journals = jo;
    confs = co;

    for(int i=0; i<CoursesTaught.size(); i++){
        CoursesTaught[i].SetGrade(0);
    }
}

// Returns journals value
unsigned int Faculty::GetJournals(){
    return journals;
}

// Returns confs value
unsigned int Faculty::GetConfs(){
    return confs;
}

// Returns copy of courses vector
vector<Course> Faculty::GetCourses(){
    return CoursesTaught;
}

// Prints id, name, journals, conferences
// on one line separated by a space.
void Faculty::Print(){
    cout << GetId() << " " << GetName() << " " << journals << " " << confs << endl;
}

Faculty::~Faculty(){}