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
    int ok = 1;
    for (int i = 0; i < strlen(s) && i < strlen(c); i++)
    {
        if (s[i] != c[i])
        {
            ok = 0;
            break;
        }
    }

    if (ok)
    {
        printf("Strings are Equal!");
    }
    else
    {
        printf("Strings are not Equal!");
    }
}