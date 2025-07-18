#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // For std::sort
#include <fstream>   // For file I/O
#include "Employee.h"
#include "ConsoleMenu.h"

int main() {
    std::vector<Employee> employees;
    int choice;

    do {
        printMenu();
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            addEmployee(employees);
            break;
        }
        case 2: {
            listEmployees(employees);
            break;
        }
        case 3: {
            removeEmployee(employees);
            break;
        }
              // ... Implement other cases (remove, sort, save/load)
        }
    } while (choice != 7);

    return 0;
}