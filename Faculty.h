#include "Person.h"
#include "Course.h"

#pragma once
class Faculty: public Person
{
  
 private:
  vector<Course> CoursesTaught;
  unsigned int journals, confs;
  
 public:

  Faculty();
    
  Faculty(unsigned int sad, string naam, persontype p,
	  vector<Course> C, unsigned int jo, unsigned int co);
    // Assigned respectively.
    // gradepoint field is set to 0 for Faculty's Course objects
    // and is not used.
    
  unsigned int GetJournals(); // Returns journals value
  unsigned int GetConfs(); // Returns confs value
  vector<Course> GetCourses(); // Returns ref. to courses vector
  
  void Print(); // Prints id, name, journals, conferences
                // on one line separated by a space.

  ~Faculty();
};
