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
int main()
{
    int n;
    readi(n);
    int ans = 0;
    int s = countDig(n);
    for (int i = 1; i <= s; i++)
    {
        ans += ((n % 10) * (pow(2, i - 1)));
        n /= 10;
    }
    printf("%d", ans);
    return 0;
}