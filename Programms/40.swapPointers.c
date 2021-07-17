#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <strings.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int a, b;
    printf("Enter A: ");
    readi(a);
    printf("Enter B: ");
    readi(b);

    swap(&a, &b);
    printf("After swapping the values of -\n");
    printf("A: %d\n", a);
    printf("B: %d\n", b);
}