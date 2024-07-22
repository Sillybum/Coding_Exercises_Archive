#include <stdio.h>

void max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	printf("The biggest among %d, %d, %d, %d is %d\n", a, b, c, d, max);
}

int main(void)
{
	max4(43, 134, 44, 777);
	max4(1, 4, 3, 2);
	max4(56, 53, 21, 55);
}