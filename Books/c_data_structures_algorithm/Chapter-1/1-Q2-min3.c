#include <stdio.h>

void min3(int a, int b, int c)
{
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	printf("The smallest among %d, %d, %d is %d\n", a, b, c, min);
}

int main(void)
{
	min3(43, 134, 44);
	min3(1, 4, 3);
	min3(56, 53, 21);
}