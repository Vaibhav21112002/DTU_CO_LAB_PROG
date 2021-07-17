#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int main()
{
    char s[100];
    printf("Enter a String: ");
    gets(s);
    int count = 0;
    for (int i = 0; i < 10000; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }

        count++;
    }
    printf("Length of the string is: ");
    printf("%d", count);
}