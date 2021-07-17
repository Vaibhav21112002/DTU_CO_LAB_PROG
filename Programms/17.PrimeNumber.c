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
    int n;
    printf("Enter a number: ");
    readi(n);
    if (n <= 1)
    {
        printf("Neither Prime nor Composite");
        return 0;
    }

    if (n == 2)
    {
        printf("The number is a prime Number");
        return 0;
    }

    int ok = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("The number is a composite Number");
            ok = 0;
            break;
        }
    }

    if (ok == 1)
    {
        printf("The number is a prime Number");
    }

    return 0;
}