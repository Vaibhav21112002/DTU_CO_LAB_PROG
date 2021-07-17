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
    printf("Enter the string: ");
    gets(s);
    char c[1000];
    strcpy(c, s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (char)(s[i] - 32);
        }
    }
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = (char)(c[i] + 32);
        }
    }

    printf("Uppercase string is: \n");
    printf("%s\n", s);
    printf("Lowercase string is: \n");
    printf("%s", c);
}