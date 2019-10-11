#include <iostream>
using namespace std;

class Person {
private:
	string name = "name";
	string adress;
	string phone;
	string email;
public:
	Person() {}
	string getName() {
		return name;
	}
	virtual string toString() const {
		return "Person";
	}
	void printClass(const Person& p) {
		cout << p.toString() << ' ' << getName() << endl;
	}
};

class Student: public Person
{
public:
	Student();
	string toString() const {
		return "Student";
	}
	~Student();

private:
	string status;
};

Student::Student()
{
}

Student::~Student()
{
}

class Employee: public Person
{
public:
	Employee();
	string toString() const {
		return "Employee";
	}
	~Employee();

private:
	string office;
	int salary;
	string dateHired;
};

Employee::Employee()
{
}

Employee::~Employee()
{
}


class Faculty: public Employee
{
public:
	Faculty();
	string toString() const {
		return "Faculty";
	}
	~Faculty();

private:
	int officeHours;
	string rank;
};

Faculty::Faculty()
{
}

Faculty::~Faculty()
{
}

class Staff: public Employee
{
public:
	Staff();
	string toString() const {
		return "Staff";
	}
	~Staff();

private:
	string title;
};

Staff::Staff()
{
}

Staff::~Staff()
{
}

class MyDate
{
public:
	MyDate();
	~MyDate();

private:

};

MyDate::MyDate()
{
}

MyDate::~MyDate()
{
}


int main()
{
	Person person;
	person.printClass(person);

	Student student;
	student.printClass(student);

	Employee employee;
	employee.printClass(employee);

	Faculty faculty;
	faculty.printClass(faculty);

	Staff staff;
	staff.printClass(staff);

	return 0;
}