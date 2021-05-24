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
    float p, r, t;
    readf(p); readf(r); readf(t);
    float ans = p * pow(1 + (r / 100), t);
    printf("%f", ans - p);
}