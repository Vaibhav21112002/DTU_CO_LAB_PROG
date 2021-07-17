#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <strings.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)
#define read2d(a, n)                \
    for (int i = 0; i < n; i++)     \
    {                               \
        for (int j = 0; j < n; j++) \
        {                           \
            readi(a[i][j]);         \
        }                           \
    }
#define print2d(a, n)               \
    for (int i = 0; i < n; i++)     \
    {                               \
        for (int j = 0; j < n; j++) \
        {                           \
            printf("%d ", a[i][j]); \
        }                           \
        printf("\n");               \
    }
int main()
{
    int n;
    printf("Enter the size of the array: ");
    readi(n);
    int a[n][n], b[n][n];
    printf("Enter the elements of the first array: \n");
    read2d(a, n);
    printf("Enter the elements of the second array: \n");
    read2d(b, n);
    int ans[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < n; k++)
                ans[i][j] += a[i][k] * b[k][j];
        }
    }
    printf("The array after multiplication is: \n");
    print2d(ans, n);
}