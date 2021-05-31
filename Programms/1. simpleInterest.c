#include <stdio.h>
#include <conio.h>

int main()
{
    float p, r, t; //principle amount, rate of interest, time;
    printf("Enter the values of Principle Amount, Rate of Interest and Time")
    scanf("%f %f %f", &p, &r, &t);
    printf("%\n");
    printf("The simple is:")
    printf("%f", ((p * r * t) / 100)); //Printing Simple Interest
}