#ifndef Course_h
#define Course_h
#include <string>
using namespace std;

class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;

public:

	Course();
	Course(const string& courseName, int capacity);
	string getCourseName() const;  // look at const placement
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;
	void clear();
	string* doubleCapacity(const string* list, int size);

};

#endif