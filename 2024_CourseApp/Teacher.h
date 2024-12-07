#pragma once
#include "Person.h"
#include "Utility.h"
#include "Course.h"
#include <string>
#include <vector>

class Teacher : public Person
{
private:
	string teacherId; // �Юv�s��
	Department department; // �Юv���ݨt��
	ClassName className; // �Юv�ұ¯Z��
	vector<Course> courses; // �Юv���ݽҵ{

public:
	Teacher(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate, const string& teacherId, Department department, ClassName, const vector<Course>&courses);

};
