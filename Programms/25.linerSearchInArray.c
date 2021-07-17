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
    int n, k; //n = size of array and k = value of the element to be searched
    printf("Enter the size of the array");
    readi(n);
    printf("\nEnter the number you want to serach: ");
    readi(k);
    int arr[n]; //arr = name of the array
    int pos = -1;
    printf("Enter the elements of the array");
    for (int i = 0; i < n; i++)
    {
        readi(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        printf("Element found at index %d", pos);
    }
    else
    {
        printf("Element Not Found in the array");
    }
}