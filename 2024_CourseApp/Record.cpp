#include "Record.h"
#include <iostream>
#include <iomanip>
using namespace std;

int Record::nextId = 1;
Record::Record(const string& studentId, const string& courseId):recordId(nextId++),studentId(studentId), courseId(courseId), recordDate(time(0))
{
}

int Record::getRecordId() const
{
	return recordId;
}

string Record::getStudentId() const
{
	return studentId;
}

string Record::getCourseId() const
{
	return courseId;
}

string Record::getRecordDate() const
{
	char butter[20];
	struct tm timeinfo;
	localtime_s(&timeinfo, &recordDate);
	strftime(butter, sizeof(butter), "%Y-%m-%-d", &timeinfo);
	return string(butter);
}

void Record::display()
{
	cout << "��ҧǸ�: " << getRecordId() << endl;
	cout << "�Ǹ�: " << getStudentId() << endl;
	cout << "�ҵ{�N�X: " << getCourseId() << endl;
	cout << "��Ҥ��: " << getRecordDate() << endl;
	cout << "----------------" << endl;
}
