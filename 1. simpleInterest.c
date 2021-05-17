#include <stdio.h>
#include <conio.h>

int main()
{
    float p, r, t; //principle amount, rate of interest, time;
    scanf("%f %f %f", &p, &r, &t);
    printf("%f", ((p * r * t) / 100)); //Printing Simple Interest
}