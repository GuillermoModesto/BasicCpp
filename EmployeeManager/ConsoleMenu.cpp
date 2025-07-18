#include "ConsoleMenu.h"
#include <iostream>
#include <fstream>

void printMenu() {
	std::cout << "++++++++++++++++++++++++++++\n"
		<< "Employee Manager\n"
		<< "1. Add Employee\n"
		<< "2. List Employees\n"
		<< "3. Remove Employee\n"
		<< "4. Sort Employees\n"
		<< "5. Save to File\n"
		<< "6. Load from File\n"
		<< "7. Exit\n"
		<< "++++++++++++++++++++++++++++\n";
}

void addEmployee(std::vector<Employee>& employees) {
	std::string name, department;
	size_t age;
	double salary;

	std::cout << "Enter name: ";
	std::cin.ignore(); //clear input buffer
	std::getline(std::cin, name);

	std::cout << "Enter age: ";
	std::cin >> age;

	std::cout << "Enter salary: ";
	std::cin >> salary;

	std::cout << "Enter department: ";
	std::cin.ignore();
	std::getline(std::cin, department);

	employees.emplace_back(name, age, salary, department); //constructs object in-place at the end of the vector
}

void listEmployees(const std::vector<Employee>& employees) {
	for (const auto& emp : employees) { //deduce type with auto, const& for referencing
		emp.printInfo();
	}
}

void removeEmployee(std::vector<Employee>& employees) {
	std::string name;

	std::cout << "Employee name: ";

	std::cin.ignore();
	std::getline(std::cin, name);

	employees[Employee::findEmployeeByName(employees, name)].printInfo();
}