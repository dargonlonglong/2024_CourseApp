#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthName, const string& studentid, Department department, ClassName className): Person(id, lastName, firstName, gender, birthName), studentId(studentid), department(department), className(className)
{
}

string Student::getStudentId() const
{
	return studentId;
}

Department Student::getDepartment() const
{
	return department;
}

ClassName Student::getclassName() const
{
	return className;
}

void Student::setStudentId(const string& studentId)
{
	this->studentId = studentId;
}

void Student::setDepartment(Department department)
{
	this->department = department;
}

void Student::setClassName(ClassName className)
{
	this->className = className;
}

void Student::display() const
{
	Person::display();
	cout << "�Ǹ�: " << studentId << endl;
	cout << "��t: " << Utility::tostring(department) << endl;
	cout << "�Z��: " << static_cast<int>(className) << endl;
}
