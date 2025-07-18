#pragma once
#include <string>
#include <iostream>

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
};