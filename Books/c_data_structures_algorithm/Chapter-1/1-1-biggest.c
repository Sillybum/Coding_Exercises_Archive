#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("This program decides which integer is the biggest.\n");
	printf("value of a : ");
	scanf_s("%d", &a);
	printf("value of b : ");
	scanf_s("%d", &b);
	printf("value of c : ");
	scanf_s("%d", &c);

	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;

	printf("The biggest number is %d.", max);
	return 0;
}