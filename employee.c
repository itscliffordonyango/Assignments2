/*

Date : 5th November 2024
Author : Clifford Onyango

i) write a c program to define employee that contains the following fields :
1. name (string of 25 characters )
2. id (integer)
3. department (string of 20 characters)
salary (a float)
email (string of 50 characters)

ii) Declare a variable of this  structure and innitialize it with the following data :
name = "John Doe"
id = 12345
department = "Hi=uman Resources"
salary = 55000.50
email = "john.doe@company.com"

iii) Print the values
*/

#include <stdio.h>
#include <string.h>

// i)
struct employee
{
    char name [25];
    int id;
    char department [20];
    float salary;
    char email [50];
};

int main (){

// ii)
    struct employee emp;

    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    strcpy(emp.department, "Human Resources");
    emp.salary = 55000.50;
    strcpy(emp.email, "john.doe@company.com");

// iii)
    printf("Name : %s \n", emp.name);
    printf("Employee ID : %d \n", emp.id);
    printf("Department : %s \n", emp.department);
    printf("Salary: %f \n", emp.salary);
    printf("Email : %s \n", emp.email);
}