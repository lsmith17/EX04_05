#include<iostream>
#include"Course.h"
#include<string>
using namespace std;

int main(){

	Course course1("MA-123", 3);

	course1.addStudent("Melinda Brussels");
	course1.addStudent("Deborah Southhampton");
	course1.addStudent("William Turner");

	course1.dropStudent("Melinda Brussels");

	string* students = course1.getStudents();
	cout << "Students in course: " << endl;

	for (int i = 0; i < course1.getNumberOfStudents(); i++){
		cout << students[i] << " ";
	}
	
}