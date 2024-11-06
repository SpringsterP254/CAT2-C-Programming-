//A program to a structure named employee
#include <stdio.h>
#include <string.h>
//The Structure 
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declaration and initialization
    struct employee employee;

    strcpy(employee.name, "John Doe");
    employee.id = 12345;
    strcpy(employee.department, "Human Resources");
    employee.salary = 55000.50;
    strcpy(employee.email, "john.doe@company.com");
    

    // Print employee details
    printf("Employee name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.id);
    printf("Employee department: %s\n", employee.department);
    printf("Employee salary: %.2f\n", employee.salary);
    printf("Employee email: %s\n", employee.email);



    return 0;
}
