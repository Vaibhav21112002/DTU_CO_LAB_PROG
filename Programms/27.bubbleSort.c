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
    printf("Enter the number of elements you want to enter");
    readi(n);
    int arr[n];
    printf("Enter the elements of array: ");
    readarr(arr, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The Sorted Array now is: \n");
    printarr(arr, n);
    return 0;
}