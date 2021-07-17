#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

int squarePerimeter(int a)
{
    return 4 * a;
}
int rectanlgePerimeter(int a, int b)
{
    return 2 * (a + b);
}
float circlePerimeter(float r)
{
    return (r * 2 * 3.14);
}
float trianglePerimeter(float a, float b, float c)
{
    return (a + b + c);
}
int sqaureArea(int a)
{
    return a * a;
}
int reactangleArea(int a, int b)
{
    return a * b;
}
float circleArea(float r)
{
    return (3.14 * r * r);
}
float triangleArea(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    int a, p, q;
    float r, x, y, z;
    printf("Enter the side length of square: ");
    readi(a);
    printf("Enter the length and breath of reactanlge: ");
    readi(p);
    readi(q);
    printf("Enter the radius of circle: ");
    readf(r);
    printf("Enter the sides of triangle: ");
    readf(x);
    readf(y);
    readf(z);
    printf("Perimeter of square is: %d\n", squarePerimeter(a));
    printf("Area of square is: %d\n", sqaureArea(a));
    printf("Perimeter of reactanlge is: %d\n", rectanlgePerimeter(p, q));
    printf("Area of reactanlge is: %d\n", reactangleArea(p, q));
    printf("Perimeter of Circle is: %f\n", circlePerimeter(r));
    printf("Area of Circle is: %f\n", circleArea(r));
    printf("Perimeter of Triangle is: %f\n", trianglePerimeter(x, y, z));
    printf("Area of Trianlge is: %f\n", triangleArea(x, y, z));
}