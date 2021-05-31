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
    int a;
    readi(a);
    if (a % 4 == 0 || (a % 400 == 0 && a % 100 != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap year");
    }
    return 0;
}