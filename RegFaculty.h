#include "Person.h"
#include "Course.h"
#include "Faculty.h"

#pragma once
class RegFaculty: public Faculty
{
  
 private:
  unsigned int *advisees;
  int numadv;
  
 public:

  RegFaculty();

  RegFaculty(unsigned int sad, string naam, persontype p,
	     vector<Course> C, unsigned int jo, unsigned int co,
	     unsigned int S[], unsigned int nadv);    
    // Assigned respectively.
    // gradepoint field is set to 0 for Faculty's Course objects
    // and is not used.
    
  bool isAdvisor(unsigned int sid);
  unsigned int NumAdvisees();
  
  void Print(); // Prints id, name, journals, conferences
                // on one line separated by a space.

  ~RegFaculty();
};
