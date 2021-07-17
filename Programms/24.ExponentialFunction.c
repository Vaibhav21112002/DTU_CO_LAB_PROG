#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}
float expn(float x, float t)
{
    float a = ((float)pow(x, t) / (float)factorial(t));
    return a;
}
//c = expn(x,t)=> c = x^t/(t!)
int main()
{
    float x;
    printf("Enter a number:");
    readf(x);
    float ans = 0;
    for (float i = 0; i <= x; i++)
    {
        ans += expn(x, i);
    }

    printf("Exponential for %d is: ", x);
    printf("%0.5f", ans);
    return 0;
}