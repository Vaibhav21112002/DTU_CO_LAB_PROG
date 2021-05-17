#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);
    int age;
    scanf("%d", &age);
    float marks;
    scanf("%f", &marks);

    printf("Your name's first character is %c\n", n);
    printf("Your age is %d\n", age);
    printf("Your 12th class marks are %f\n", marks);

    return 0;
}