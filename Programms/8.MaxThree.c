#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int max(int a, int b)
{
    return (a > b ? a : b);
}

int main()
{
    int a, b, c;
    readi(a);
    readi(b);
    readi(c);
    if (a > b && a > c)
    {
        printf("Maxmimum of the three numbers is A =  %d", a);
    }
    else if (b > c && b > a)
    {
        printf("Maxmimum of the three numbers is B = %d", b);
    }
    else if (c > a && c > b)
    {
        printf("Maxmimum of the three numbers is C = %d", c);
    }
    else if (a == b && a > c)
    {
        printf("Mamimum numbers are  A and B => %d", a);
    }
    else if (c == b && a < c)
    {
        printf("Mamimum numbers are B and C => %d", b);
    }
    else if (c == a && b < c)
    {
        printf("Mamimum numbers are A and C => %d", a);
    }
    else
    {
        printf("All the numbers are equal and Hence Maximum is = %d", a);
    }

    // printf("%d", max(a, max(b, c)));
    return 0;
}