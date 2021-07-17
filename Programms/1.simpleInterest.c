#include <stdio.h>
#include <conio.h>

int main()
{
    float p, r, t;
    printf("Enter the values of Principle Amount, Rate of Interest and Time");
    scanf("%f %f %f", &p, &r, &t);
    printf("%\n");
    printf("The value of Simple Interest is:");
    printf("%f", ((p * r * t) / 100));
}