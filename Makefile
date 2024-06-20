#https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

CC = g++
CFLAGS = -g
DEPS = MainDriver.o Course.o Person.o Faculty.o Student.o RegFaculty.o VisFaculty.o

L4Q1: $(DEPS)
	$(CC) $(CFLAGS) -o $@ $(DEPS)

#You only need to change 'MainDriver.cpp' to 'RollNum-Labx-Qy.cpp'
MainDriver.o: MainDriver.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

#General rule for all other files with header to generate
%.o: %.cpp %.h
	$(CC) $(CFLAGS) -c -o $@ $<

#The above stated rule (general rule) is equivalent of the below commented rules
# Course.o: Course.cpp Course.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

# Person.o: Person.cpp Person.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

# Faculty.o: Faculty.cpp Faculty.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

# Student.o: Student.cpp Student.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

# RegFaculty.o: RegFaculty.cpp RegFaculty.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

# VisFaculty.o: VisFaculty.cpp VisFaculty.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o L4Q1
