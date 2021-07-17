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
    printf("Enter a Number:");
    readi(a);
    printf("The reversed Number is:\n");
    while (a > 0)
    {
        int t = a % 10;
        printf("%d", t);
        a /= 10;
    }

    return 0;
}