#include <stdio.h>
#include <conio.h>
#define br printf("\n")
#define readi(a) scanf("%d", &a)
#define readf(a) scanf("%f", &a)
#define readc(a) scanf("%c", &a)
#define reads(a) scanf("%s", &a)

void init_code()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main()
{
	float a, b;
	printf(" Enter the value of two numbers:\n");
	readf(a);
	readf(b);
	printf("The sum of two number is %f", a + b);
	br;
	printf("The average of two number is %f", ((a + b) / 2));
}