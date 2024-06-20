Project Overview
This project manages student records, including their course details and faculty advisors, and processes a series of queries to retrieve specific information. The data is stored in a vector and includes various functionalities like retrieving host faculty details, finding the student with the highest CGPA, and checking if a student is an advisee of a specific faculty.

Input File Format
The input file consists of multiple entries where each entry represents a student's record. The format of each entry is as follows:

bash
Copy code
id name C uint1 gp1 uint2 gp2 ... uintC gpC fid
id: The unique identifier (sadhar) for the student.
name: The name of the student.
C: The number of courses taken by the student.
uint1, uint2, ..., uintC: The course numbers.
gp1, gp2, ..., gpC: The grades corresponding to the courses.
fid: The id of the faculty advisor.
Query Format
The program processes the following types of queries, each on a new line:

H vid: Prints the sadhar and name of the relevant host RegFaculty.

Copy code
hid name
If the vid is invalid or does not match any hid in the stored entries, no output is generated.

J: Prints the sadhar of the student with the highest CGPA. If multiple students have the same highest CGPA, the sadhar of the first student stored in the vector is printed.

U sid: Prints 1 if the given sid is stored in the advisees list of the faculty fid that is stored in the student's record; otherwise, prints 0.

If there is no fid entry in the database for the given sid, 0 is printed.
Invalid sid values are ignored and no output is generated.
X: Exits the program.

Assumptions
Student sadhars are unique.
No need to check if an identifier already exists in the system.
The entries are stored in the vector in the order they appear in the input file.
Usage
To use this program, compile the code and run the executable with the input file containing student records followed by the queries. Ensure the input file is formatted correctly as described above.
