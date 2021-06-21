#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int arr[32];

int main()
{
    int n;
    readi(n);
    int count = 0;
    while (n > 0)
    {
        arr[count] = n % 2;
        n = n / 2;
        count++;
    }
    for (int i = count - 1; i >= 0; i--)
        printf("%d", arr[i]);
    return 0;
}