# Project Documentation

## Project Overview

This project extends the class hierarchy from Lab 3, managing records for Regular Faculty, Visiting Faculty, and Students. The data is stored in a single vector and includes functionalities to process various queries related to these entities.

### Class Hierarchy

- **Person** (Base Class)
  - **Faculty** (Derived from Person)
    - **RegularFac**
    - **VisitingFac**
  - **Student** (Derived from Person)

### Additional Attributes

- **Person Class**: Added a private data member `ptype` of enumerated type `persontype`.

### Main Function

The `main()` function declares a single vector, `vector<Person*> AllPersons`, to store information about all entities read from the input file. The starter code for the `main()` function is provided in `MainDriverStart.cpp`.

### Input File Format

The input file contains information for each entity type (Regular Faculty, Visiting Faculty, or Student) terminated by a line containing `-1`.

#### Regular Faculty

Format:
id name N uint1 uint2 ... uintN J C A uint1 uint2 ... uintA
- **id**: Sadhar identifier (1000 - 1999, persontype: rfa)
- **name**: Name of the faculty
- **N**: Number of courses taught
- **uint1, uint2, ..., uintN**: Course numbers
- **J**: Number of journals
- **C**: Number of conferences
- **A**: Number of advisees
- **uint1, uint2, ..., uintA**: Advisees' identifiers

#### Visiting Faculty

Format:
id name N uint1 uint2 ... uintN J C hid

- **id**: Sadhar identifier (2000 - 2999, persontype: vfa)
- **name**: Name of the faculty
- **N**: Number of courses taught
- **uint1, uint2, ..., uintN**: Course numbers
- **J**: Number of journals
- **C**: Number of conferences
- **hid**: Host identifier

#### Student

Format:
id name C uint1 gp1 uint2 gp2 ... uintC gpC fid
- **id**: Sadhar identifier (3000 - 9999, persontype: cst)
- **name**: Name of the student
- **C**: Number of courses taken
- **uint1, uint2, ..., uintC**: Course numbers
- **gp1, gp2, ..., gpC**: Grades corresponding to the courses
- **fid**: Faculty advisor's id

### Query Format

The program processes the following types of queries, each on a new line:

- **H vid**: Prints the sadhar and name of the relevant host `RegFaculty`.
Invalid `vid` values or vids where there is no matching `hid` in the stored entries are ignored, and no output is generated.

- **J**: Prints the sadhar of the student with the highest CGPA. If multiple students have the same highest CGPA, the sadhar of the first student stored in the vector is printed.

- **U sid**: Prints `1` if the given `sid` is stored in the advisees list of the `fid` that is stored in the student's record; otherwise, prints `0`.
- If there is no `fid` entry in the database for the given `sid`, `0` is printed.
- Invalid `sid` values are ignored, and no output is generated.

- **X**: Exits the program.

### Assumptions

- Student and faculty sadhars are unique.
- No need to check if an identifier already exists in the system.
- The entries are stored in the vector in the order they appear in the input file.


