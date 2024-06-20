#
main function: The main() function will declare a single vector, vector<Person *> AllPersons to store
the information about all the entities read from the input file.
The input file will have only three entities: RegFaculty, VisFaculty, Student. The encoding scheme
is based on the sadhar identifiers, as follows:
RegFaculty: 1000 - 1999; persontype: rfa
VisFaculty: 2000 - 2999; persontype: vfa
Student: 3000 - 9999, persontype: cst
Input: The inputs are:
• The first set of lines contains information for each entity (RegFaculty, VisFaculty or Student)
terminated by a line containing -1.
For RegFaculty, the format is (0 ≤ N ≤ 100 and 0 ≤ A ≤ 100):
id name N uint1 uint2 ... uintN J C A uint1 uint2 ... uintA
This corresponds to sadhar, name, the N course numbers taught by the faculty number, the
number of journals and conferences, the number of advisees (A), and advisees’ identifiers respectively.
Assume that the RegFaculty sadhars are unique. There is no need to check if an identifier already
exists.
For VisFaculty, the format is (0 ≤ N ≤ 100):
id name N uint1 uint2 ... uintN J C hid
This corresponds to sadhar, name, the N course numbers taught by the faculty number, the
number of journals and conferences, and the host identifier, respectively.
For Student, the format is (0 ≤ C ≤ 100):
id name C uint1 gp1 uint2 gp2 ... uintC gpC fid
This corresponds to the sadhar, name, C course numbers and grades for courses taken by the
student, and the id of the faculty advisor.
Assume that the Student sadhars are unique. There is no need to check if an identifier already
exists.
The entries are stored in the vector in the order of appearance in the input file.
• The next set of lines contain a series of queries, one per line:
– H vid: Prints the sadhar and name of the relevant host RegFaculty, as follows:
hid name
Invalid vid values or vids where there is no matching hid in the stored entries, are ignored
and no output is generated.
– J: Prints the sadhar of the student with the highest CGPA; if multiple students have the same
highest CGPA, then the sadhar of the first student stored in the vector is printed.
– U sid: Prints 1 if this sid is stored in the advisees list of the fid that is stored in the Student’s
record; and 0, otherwise.
If there is no fid entry in the database for the given sid, then 0 is printed.
Invalid sid values are ignored and no output is generated.
– X: Exit the program
