#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

#pragma once
class Course {

 private:

  // each course identified is a
  // 3-digit number (100 - 999)

  unsigned int cid;

  // Integer value between from 4 to 10, both inclusive
  
  unsigned int gradepoint;  

 public:

  Course();

  // assigned respectively
  // if id is not between 100 and 999 (both inclusive), cid is set to 0
  // if grade is not between 4 and 10 (both inclusive),
  // gradepoint is set to 0
  Course(unsigned int id, unsigned int grade); 

  unsigned int GetCid(); // returns cid

  unsigned int GetGrade(); // returns gradepoint

  // if grade is not between 4 and 10 (both inclusive),
  // gradepoint is set to 0

  void SetGrade(int g); // sets gradepoint to g

  void Print(); // Prints cid and gradepoint separated by a blank space on
  // one line.
  
};
