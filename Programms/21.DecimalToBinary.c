#include <stdio.h>
#include <conio.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int arr[32];
int countDig(int a)
{
    int ans = 0;
    while (a > 0)
    {
        ans++;
        a /= 10;
    }
    return ans;
}
int main()
{
    int n1;
    printf("Enter a deicmal Number");
    readi(n1);
    int tt = n1;
    int n;
    printf("Enter a binary Number");
    readi(n);
    int tt1 = n;

    //<------Decimal To Binary------->
    int count = 0;
    while (n1 > 0)
    {
        arr[count] = n1 % 2;
        n1 = n1 / 2;
        count++;
    }
    printf("Binary Form of %d is: ", tt);
    for (int i = count - 1; i >= 0; i--)
        printf("%d", arr[i]);
    //<------Decimal To Binary Ends------->
    //<------Binary to Decimal------->
    int ans = 0;
    int s = countDig(n);
    for (int i = 1; i <= s; i++)
    {
        ans += ((n % 10) * (pow(2, i - 1)));
        n /= 10;
    }
    printf("\nDeciaml Form of %d is: ", tt1);
    printf("%d", ans);
    //<------Binary to Decimal Ends------->
    return 0;
}