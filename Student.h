#include "Person.h"
#include "Course.h"

#pragma once
class Student: public Person
{
  
 private:
  vector<Course> CoursesTaken;
  unsigned int cgpa; // Integer part of the average gradepoints of
                     // all Courses in CoursesTaken vector.
                     // 9, 9, 8: avg = 8.67 = 8
  unsigned int facad;
  
 public:

  Student();
  
  Student(unsigned int sad, string naam, persontype p,
	  vector<Course> C, unsigned int fid);
    // Assigned respectively.
    
  vector<Course> GetCourses(); // Returns copy of courses vector
  unsigned int GetCG();
  unsigned int GetFacad(); // Returns  copy of Facad ID of student.
  void Print(); // Prints sadhar, name, cpga details of student,
                // followed by facad's id.

  ~Student();
};
