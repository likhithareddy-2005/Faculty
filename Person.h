#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

#pragma once
enum persontype {rfa, vfa, cst, rst, st, fa, none};

class Person
{

 private:

  unsigned int sadhar;
  string name;
  persontype ptype;
  
 public:

  Person();
  
  Person(unsigned int sad, string naam, persontype p); // assigned respectively

  string GetName();

  void SetName(string naam);

  persontype GetPType();

  void SetPType(persontype p);

  unsigned int GetId();

  void SetId(unsigned int sad);
  
  void Print(); // Prints id and name separated by a blank space on
                  // one line.

  ~Person();
};
