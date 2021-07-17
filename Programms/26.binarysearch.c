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
    printf("Enter the number you want to serach: ");
    readi(k);
    int arr[n];
    int pos = -1;
    printf("Enter the element of array:\n ");
    for (int i = 0; i < n; i++)
    {
        readi(arr[i]);
    }

    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
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