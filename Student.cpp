#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <vector>
#include "Person.h"
#include "Course.h"
#include "Student.h"

using namespace std;

Student::Student(){
    cgpa = 0;
}

// Assigned respectively.
Student::Student(unsigned int sad, string naam, persontype p, vector<Course> C, unsigned int fid): Person(sad, naam, p){
    CoursesTaken = C;
    facad = fid;

    // Integer part of the average gradepoints of
    // all Courses in CoursesTaken vector.
    // 9, 9, 8: avg = 8.67 = 8
    int nc = CoursesTaken.size();
    if(nc > 0){
        int sum = 0;
        for(int i=0; i<nc; i++){
            sum += CoursesTaken[i].GetGrade();
        }
        cgpa = sum / nc;
    }
    else{
        cgpa = 0;
    }
}

// Returns copy of courses vector
vector<Course> Student::GetCourses(){
    return CoursesTaken;
}

unsigned int Student::GetCG(){
    return cgpa;
}

// Returns  copy of Facad ID of student
unsigned int Student::GetFacad(){
    return facad;
}

// Prints sadhar, name, cpga details of student,
// followed by facad's id.
void Student::Print(){
    cout << GetId() << " " << GetName() << " " << cgpa << " " << facad << endl;
}

Student::~Student(){}