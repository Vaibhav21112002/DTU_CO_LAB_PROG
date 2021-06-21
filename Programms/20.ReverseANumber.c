#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int countDig(int a)
{

    int ans = 0;
    while (a > 0)
    {
        ans++;
        a /= 10;
    }

    return ans;
}
int power(int a, int b)
{
    int ans = 0;
    for (int i = 0; i < b - 1; i++)
    {
        ans += (a * a);
    }

    return ans;
}
int main()
{
    int a;
    readi(a);
    int digits = countDig(a);

    int ans = 0;
    int t;
    while (a > 0)
    {
        printf("%d\n", a);
        t = a % 10;
        t = t * (pow(10, digits - 1));
        ans += t;
        a /= 10;
        digits--;
    }

    printf("%d", ans);

    return 0;
}