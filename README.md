<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Project Documentation</title>
</head>
<body>
    Project Overview
    <p>This project manages student records, including their course details and faculty advisors, and processes a series of queries to retrieve specific information. The data is stored in a vector and includes various functionalities like retrieving host faculty details, finding the student with the highest CGPA, and checking if a student is an advisee of a specific faculty.</p>
    
    
id name C uint1 gp1 uint2 gp2 ... uintC gpC fid
    </pre>
    <ul>
        <li><strong>id</strong>: The unique identifier (sadhar) for the student.</li>
        <li><strong>name</strong>: The name of the student.</li>
        <li><strong>C</strong>: The number of courses taken by the student.</li>
        <li><strong>uint1, uint2, ..., uintC</strong>: The course numbers.</li>
        <li><strong>gp1, gp2, ..., gpC</strong>: The grades corresponding to the courses.</li>
        <li><strong>fid</strong>: The id of the faculty advisor.</li>
    </ul>

    <h2>Query Format</h2>
    <p>The program processes the following types of queries, each on a new line:</p>
    <ul>
        <li><strong>H vid</strong>: Prints the sadhar and name of the relevant host <code>RegFaculty</code>.
            <pre>
hid name
            </pre>
            If the <code>vid</code> is invalid or does not match any <code>hid</code> in the stored entries, no output is generated.
        </li>
        <li><strong>J</strong>: Prints the sadhar of the student with the highest CGPA. If multiple students have the same highest CGPA, the sadhar of the first student stored in the vector is printed.</li>
        <li><strong>U sid</strong>: Prints <code>1</code> if the given <code>sid</code> is stored in the advisees list of the faculty <code>fid</code> that is stored in the student's record; otherwise, prints <code>0</code>.
            <ul>
                <li>If there is no <code>fid</code> entry in the database for the given <code>sid</code>, <code>0</code> is printed.</li>
                <li>Invalid <code>sid</code> values are ignored and no output is generated.</li>
            </ul>
        </li>
        <li><strong>X</strong>: Exits the program.</li>
    </ul>

    <h2>Assumptions</h2>
    <ul>
        <li>Student sadhars are unique.</li>
        <li>No need to check if an identifier already exists in the system.</li>
        <li>The entries are stored in the vector in the order they appear in the input file.</li>
    </ul>

    <h2>Usage</h2>
    <p>To use this program, compile the code and run the executable with the input file containing student records followed by the queries. Ensure the input file is formatted correctly as described above.</p>

    <h3>Example</h3>
    <h4>Input File</h4>
    <pre>
101 John 2 100 8 101 7 201
102 Alice 3 102 9 103 10 104 9 202
103 Bob 1 105 6 203
    </pre>
    <h4>Queries</h4>
    <pre>
H 201
J
U 102
X
    </pre>
    <h4>Output</h4>
    <pre>
201 Dr.Smith
102
1
    </pre>

    <h2>Compilation</h2>
    <p>Use the following command to compile the source files:</p>
    <pre>
g++ -o MainDriver MainDriver.cpp Course.cpp
    </pre>

    <h2>Execution</h2>
    <p>Run the compiled executable with the input file:</p>
    <pre>
./MainDriver input.txt
    </pre>
    <p>Replace <code>input.txt</code> with the actual name of your input file.</p>

    <h2>Conclusion</h2>
    <p>This project demonstrates a simple yet effective way to manage and query student and faculty records using C++. The program efficiently handles input, stores records, and processes queries as specified.</p>
</body>
</html>
