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
    int ans = 0;
    while (a > 0)
    {
        ans += a % 10;
        a /= 10;
    }
    printf("%d", ans);
    return 0;
}