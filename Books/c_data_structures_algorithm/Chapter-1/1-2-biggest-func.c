#include <stdio.h>

void max3(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	printf("The biggest among %d, %d, %d is %d\n", a, b, c, max);
}

int main(void)
{
	max3(43, 134, 44);
	max3(1, 4, 3);
	max3(56, 53, 21);
}