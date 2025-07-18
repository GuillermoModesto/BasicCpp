#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For std::sort
#include <fstream>   // For file I/O
#include "Employee.h"

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

int main() {
    std::vector<Employee> employees;
    int choice;

    do {
        printMenu();
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: { // Add Employee
            std::string name, department;
            size_t age;
            double salary;

            std::cout << "Enter name: ";
            std::cin.ignore(); // Clear input buffer
            std::getline(std::cin, name);

            std::cout << "Enter age: ";
            std::cin >> age;

            std::cout << "Enter salary: ";
            std::cin >> salary;

            std::cout << "Enter department: ";
            std::cin.ignore();
            std::getline(std::cin, department);

            employees.emplace_back(name, age, salary, department); //constructs object in-place at the end of the vector
            break;
        }
        case 2: { // List Employees
            for (const auto& emp : employees) { //Deduce type with auto, const& for referencing, emp loops through each "employees"
                emp.printInfo();
            }
            break;
        }
              // ... Implement other cases (remove, sort, save/load)
        }
    } while (choice != 7);

    return 0;
}