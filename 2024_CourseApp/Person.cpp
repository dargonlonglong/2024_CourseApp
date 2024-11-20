#include "Person.h"
#include <string>
using namespace std;

//Constructor, �غc�l, �غc���

Person::Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate)
{
	this->id = id;
	this->lastName=lastName;
	this->firstName = lastName;
	this->gender = gender;
	this->birthDate = birthDate;
}

string Person::getId() const
{
	return id;
}

string Person::getLastName() const
{
	return lastName;
}

string Person::getFirstName() const
{
	return firstName;
}

string Person::getGender() const
{
	return gender;
}

string Person::BirthDate() const
{
	return birthDate;
}
