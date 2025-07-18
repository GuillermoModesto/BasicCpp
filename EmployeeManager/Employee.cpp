#include "Employee.h"

Employee::Employee(const std::string& name, size_t age, double salary, const std::string& department)
	: name(name), age(age), salary(salary), department(department) {}

//Getters
std::string Employee::getName() const {
	return name;
}

size_t Employee::getAge() const {
	return age;
}

double Employee::getSalary() const {
	return salary;
}

std::string Employee::getDepartment() const {
	return department;
}

//Setters
void Employee::setSalary(double newSalary) {
	salary == newSalary;
}

void Employee::promote(double raiseAmount) {
	salary += raiseAmount;
}

//Display
void Employee::printInfo() const {
	std::cout << "----------------------------\n"
		<< "\tName: " << name << "\n"
		<< "\tAge: " << age << "\n"
		<< "\tSalary: " << salary << "\n"
		<< "\tDepartment: " << department << "\n"
		<< "----------------------------\n"
		;
}