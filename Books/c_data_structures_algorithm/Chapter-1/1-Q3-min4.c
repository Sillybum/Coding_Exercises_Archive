#include <stdio.h>

void min4(int a, int b, int c, int d)
{
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	if (min > d) min = d;
	printf("The smallest among %d, %d, %d, %d is %d\n", a, b, c, d, min);
}

int main(void)
{
	min4(43, 134, 44, 5);
	min4(1, 4, 3, 78);
	min4(56, 53, 21, 45);
	min4(443, 343, 67556, 34);
}