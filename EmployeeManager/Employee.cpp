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
	salary = newSalary;
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

//Utils
int Employee::findEmployeeByName(const std::vector<Employee>& employees, const std::string& name) {
	/* 
	* --> LAMBDAS <-- (used in modern c++)
	* Definition: Anonymous very small functions that allow captures. Commonly used in std::find_if, std::sort...
	* Structure: type name = [ captures ] ( parameters ) -> return_type { body }
	*		type is usually infered with auto
	*	captures: variables from outer scope needed in function
	*	parameters: same
	*	return_type: same, but can be omited and deduced by c++
	*	body: same
	*/

	/*
	* --> std::find_if <--
	* Execution order: Get first element (begin()), store value in param (emp), execute body;
		if true exit and store iterator (it), if not loop thru with next element until end() is reached
	*/
	
	// [name = std::as_const(name)] in this case is unnecesary, only added to remember it exists for later reference
	auto it = std::find_if(employees.begin(), employees.end(),
		[&name](const Employee& emp) {
			return emp.getName() == name;
		});

	if (it != employees.end()) {
		return std::distance(employees.begin(), it);
	}
	return -1;
}