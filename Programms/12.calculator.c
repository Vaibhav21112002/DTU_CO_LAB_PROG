#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int main()
{
    int a, b;
    char op;
    readc(op);
    readi(a);
    readi(b);
    

    switch (op)
    {
    case '+':
        printf("The sum is %d", a + b);
        break;
    case '-':
        printf("The substaction is %d", a - b);
        break;
    case '*':
        printf("The product is %d", a * b);
        break;
    case '/':
        printf("The division is %f", (float)a / b);
        break;
    case '%':
        printf("The modolus is %d", a % b);
        break;
    default:
        printf("Wrong input");
        break;
    }

    return 0;
}