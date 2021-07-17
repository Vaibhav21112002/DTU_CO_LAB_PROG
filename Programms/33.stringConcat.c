#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <strings.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int main()
{
    char s[10000];
    char c[10000];
    printf("Enter the first string: ");
    gets(s);
    printf("Enter the second string: ");
    gets(c);
    int n = strlen(s);
    for (int i = 0; i < strlen(c); i++)
    {
        s[n + i] = c[i];
    }

    printf("The concatenated String is: \n%s", s);
}