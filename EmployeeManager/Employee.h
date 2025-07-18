#pragma once
#include <string>
#include <iostream>
#include <vector>

class Employee {
private:
	std::string name;
	size_t age;
	double salary;
	std::string department;

public:
	Employee(const std::string& name, size_t age, double salary, const std::string& department);

	//Getters
	std::string getName() const;
	size_t getAge() const;
	double getSalary() const;
	std::string getDepartment() const;


	//Setters
	void setSalary(double newSalary);
	void promote(double raiseAmount);

	//Display
	void printInfo() const;

	/*
	* --> STATIC <--
	* Uses:
	*	Varibles inside functions: retains value between calls, persists for the entire program
	*	Member variables in classes: all class instances access the same variable.
	*	Functions in a class: function can be used without instanced class. Blocks this operator on non static elements.
	*	More (namespaces, global scope)
	* Its ONLY ADDED on the declaration (.h) NOT the definition (.cpp)
	*/
	//Utils
	static int findEmployeeByName(const std::vector<Employee>& employees, const std::string& name);
};