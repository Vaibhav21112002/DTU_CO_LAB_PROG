#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
const int INT_MIN = -999999999;

int main()
{
    int mx = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        int a;
        readi(a);
        if (a > mx)
        {
            mx = a;
        }
    }
    printf("%d", mx);
    return 0;
}