#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1("A123456789", "Chen", "Jason", "M", "1999-01-01");

    Person* person2 = new Person();
    person2->setid("B987654321");
    person2->setLastName("wang");
    person2->setFirstName("David");
    person2->setGender("M");
    person2->setBirthDate("1999-12-31");

    person1.display();
    cout << endl;
    person2->display();
}