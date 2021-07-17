#include <stdio.h>
#include <conio.h>
#include <string.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int main()
{
    char s[1000];
    printf("Enter a strings: ");
    gets(s);
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        char a = s[i];
        s[i] = s[strlen(s) - i - 1];
        s[strlen(s) - i - 1] = a;
    }

    printf("This is reverse of the string:\n%s", s);
}