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
int ans;
int *average(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        ans += *a;
        a++;
    }
    return (&ans);
}

int main()
{
    int n;
    printf("Enter number of elements of an array: ");
    readi(n);
    int a[n];
    printf("Enter the elements of an array: ");
    readarr(a, n);
    int *ans = average(&a[0], n);
    printf("The sum of the elements of an array: ");
    printf("%d", *ans);
}