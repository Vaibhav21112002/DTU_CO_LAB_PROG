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
    int a, b, c;
    readi(a);
    readi(b);
    readi(c);

    int ans = (a >= b && a >= c ? a : (b >= c ? b : c));
    printf("Largets Number is %d", ans);
    return 0;
}