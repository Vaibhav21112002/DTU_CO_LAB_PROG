// Including header files and macro
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
#define readarr(a, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        readi(a[i]);            \
    }
#define printarr(a, n)          \
    for (int i = 0; i < n; i++) \
    {                           \
        printf("%d ", a[i]);    \
    }

int main()
{
    char name[10000]; //name of the employee
    printf("Enter the name of the perso`n: ");
    gets(name);
    int age, salary; //age and salary of the employee
    printf("Enter the age of the person: ");
    readi(age);
    printf("Enter the salary of the person: ");
    readi(salary);

    FILE *fileptr;                   //file pointer
    fileptr = fopen("emp.txt", "w"); //open file
    if (fileptr == NULL)             //if file cannot be opened
    {
        printf("File can't open");
        return 0;
    }
    fprintf(fileptr, "Name: %s\nAge: %d\nSalary: %d", name, age, salary); //writing in the file
    printf("Data is writtensuccessfully!");                               //green signal
    fclose(fileptr);                                                      //closing the fileptr
    return 0;
}
