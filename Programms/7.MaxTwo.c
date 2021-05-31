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
    readi(a);
    readi(b);
    if (a > b)
    {
        printf("Maxmimum among the two is %d", a);
    }
    else if (a < b)
    {
        printf("Maxmimum among the two is %d", b);
    }
    else
    {
        printf("Both the numbers are equal");
    }
    return 0;
}