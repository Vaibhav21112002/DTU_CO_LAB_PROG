#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
int arr[100000];
int main()
{
    int n;
    printf("Enter a Number");
    readi(n);
    arr[0] = 0;
    arr[1] = 1;
    printf("The fibonacci Series is:\n");
    printf("%d %d ", arr[0], arr[1]);
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d ", arr[i - 1] + arr[i - 2]);
    }
    return 0;
}