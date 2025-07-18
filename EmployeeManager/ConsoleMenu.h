#pragma once
#include <vector>
#include "Employee.h"

// Menu functions
void printMenu();
void addEmployee(std::vector<Employee>& employees);
void listEmployees(const std::vector<Employee>& employees);
void removeEmployee(std::vector<Employee>& employees);
void sortEmployees(std::vector<Employee>& employees);
void saveToFile(const std::vector<Employee>& employees);
void loadFromFile(std::vector<Employee>& employees);