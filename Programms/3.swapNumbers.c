#include <stdio.h>
#include <conio.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    int a, b;
    readi(a);
    readi(b);

    // int temp = a;
    // a = b;
    // b = temp;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The a's value is %d", a);
    br;
    printf("The b's value is %d", b);
}