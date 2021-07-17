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
    char s[1000];
    char c[100];
    printf("Enter a string: ");
    gets(s);
    strcpy(c, s);
    strrev(s);
    int ok = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != c[i])
        {
            ok = 0;
            break;
        }
    }

    if (ok)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not a Palindrome!");
    }
}