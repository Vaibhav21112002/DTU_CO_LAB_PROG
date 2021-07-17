#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <strings.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

struct Employee
{
    char name[1000];
    int age;
    int salary;
    char designation[1000];
};

int main()
{
    struct Employee emp1;
    printf("Enter the name of the Employee: ");
    gets(emp1.name);
    printf("Enter the age of the Employee: ");
    readi(emp1.age);
    printf("Enter the salary of the Employee: ");
    readi(emp1.salary);
    printf("Enter the designation of the Employee: ");
    getchar();
    gets(emp1.designation);

    printf("The details of the above Employee are:\n");
    printf("Name: %s \n", emp1.name);
    printf("Age: %d\n", emp1.age);
    printf("Salary: %d \n", emp1.salary);
    printf("Designation: %s\n", emp1.designation);
}