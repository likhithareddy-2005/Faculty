#include "Person.h"
#include "Course.h"
#include "Faculty.h"

#pragma once
class VisFaculty: public Faculty
{
  
 private:
  unsigned int host;
  
 public:

  VisFaculty();

  VisFaculty(unsigned int sad, string naam, persontype p,
	     vector<Course> C, unsigned int jo, unsigned int co,
	     unsigned int h);    
    // Assigned respectively.
    // gradepoint field is set to 0 for Faculty's Course objects
    // and is not used.

  unsigned int GetHost();
  void SetHost(unsigned int h);
    
  void Print(); // Prints id, name, journals, conferences, host
                // on one line separated by a space.

  ~VisFaculty();
};
