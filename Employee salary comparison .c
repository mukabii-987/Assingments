#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

// Define the Employee structure
struct Employee {
    int emp_id;
    char name[MAX_NAME_LENGTH];
    float salary;
};

// Function to input employee data
void inputEmployeeData(struct Employee* emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp->emp_id);
    printf("Enter Employee Name: ");
    getchar(); // Clear the newline character from the buffer
    fgets(emp->name, MAX_NAME_LENGTH, stdin);
    emp->name[strcspn(emp->name, "\n")] = 0; // Remove newline character
    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);
}

// Function to find the employee with the highest salary
struct Employee findHighestSalaryEmployee(struct Employee employees[], int count) {
    struct Employee highestSalaryEmployee = employees[0];
    
    for (int i = 1; i < count; i++) {
        if (employees[i].salary > highestSalaryEmployee.salary) {
            highestSalaryEmployee = employees[i];
        }
    }
    
    return highestSalaryEmployee;
}

// Function to display employee information
void displayEmployeeInfo(struct Employee emp) {
    printf("\nEmployee with the Highest Salary:\n");
    printf("ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    struct Employee employees[3];

    // Input data for three employees
    for (int i = 0; i < 3; i++) {
        printf("\nEntering details for Employee %d:\n", i + 1);
        inputEmployeeData(&employees[i]);
    }

    // Find the employee with the highest salary
    struct Employee highestSalaryEmployee = findHighestSalaryEmployee(employees, 3);

    // Display their information
    displayEmployeeInfo(highestSalaryEmployee);

    return 0;
}