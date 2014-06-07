#include<iostream>
#include "Course.h"
#include <string>
using namespace std;

Course::Course(){
	delete[] students;
}
Course::Course(const string& courseName, int capacity){
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}


string Course::getCourseName() const{
	return courseName;
}

void Course::addStudent(const string& name){
	students[numberOfStudents] = name;
	numberOfStudents++;
	if (numberOfStudents > capacity){
		doubleCapacity(students, capacity);
	}
}

void Course::dropStudent(const string& name){
	for (int i = 0; i < numberOfStudents; i++){
		if (students[i] == name){
			students[i] = "";
		}
	}
}

string* Course::getStudents() const{
	return students;
}

int Course::getNumberOfStudents() const{
	return numberOfStudents;
}


string* Course::doubleCapacity(const string* list, int size)
{
	string* doublearr = new string[size * 2];

	for (int i = 0; i < size; i++)
	{
		doublearr[i] = list[i];
	}

	for (int i = size + 1; i < size * 2; i++)
	{
		doublearr[i] = "";
	}
	return doublearr;
}

void Course::clear(){
	for (int i = 0; i < capacity;){
		students[i] = "";
	}
}


