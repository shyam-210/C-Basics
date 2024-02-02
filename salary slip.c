#include <stdio.h>

// Define a structure to hold employee information
struct Employee {
    int empId;
    char empName[50];
    float basicSalary;
    float allowances;
    float deductions;
    float netSalary;
};

// Function to calculate net salary
void calculateNetSalary(struct Employee *emp) {
    emp->netSalary = emp->basicSalary + emp->allowances - emp->deductions;
}

// Function to display the salary slip
void displaySalarySlip(struct Employee *emp) {
    printf("Employee ID: %d\n", emp->empId);
    printf("Employee Name: %s\n", emp->empName);
    printf("Basic Salary: %.2f\n", emp->basicSalary);
    printf("Allowances: %.2f\n", emp->allowances);
    printf("Deductions: %.2f\n", emp->deductions);
    printf("Net Salary: %.2f\n", emp->netSalary);
}

int main() {
    // Declare an array of Employee structures
    struct Employee employees[3];

    // Input employee information
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        printf("Employee Name: ");
        scanf("%s", employees[i].empName);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);
        printf("Allowances: ");
        scanf("%f", &employees[i].allowances);
        printf("Deductions: ");
        scanf("%f", &employees[i].deductions);

        // Calculate net salary
        calculateNetSalary(&employees[i]);
    }

    // Display salary slips
    printf("\nSalary Slips:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        displaySalarySlip(&employees[i]);
    }

    return 0;
}
