#include <iostream>
using namespace std;

typedef struct empl
{
	int eid;
	float salary;
} xy;
typedef struct student
{
	int rollno;
	int age;
} ab;

int main()
{
	xy dee;
	dee.eid = 264;
	dee.salary = 20000;
	cout << dee.eid << endl;
	cout << dee.salary << endl;

	struct student rohit;
	rohit.rollno = 54;
	rohit.age = 20;
	cout << rohit.age << endl;
	cout << rohit.rollno << endl;
	return 0;
}