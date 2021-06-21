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
    scanf("%d", &n);
    int a = 0, b = 1;
    printf("%d %d ", a, b);
    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}