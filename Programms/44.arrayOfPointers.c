#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
#define readarr(a, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        readi(a[i]);            \
    }
#define printarr(a, n)          \
    for (int i = 0; i < n; i++) \
    {                           \
        printf("%d ", a[i]);    \
    }

int main()
{
    int n;
    printf("Enter the number of elements: ");
    readi(n);
    int *a[n];
    int b[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        readi(b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = &b[i];
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *a[i]);
    }
}