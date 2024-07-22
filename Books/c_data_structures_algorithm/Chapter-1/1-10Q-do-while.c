#include <stdio.h>

int main()
{
	int a = 6;
	int b = 6;
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	do {
		printf("Enter a value larger than 'a' : ");
		scanf_s("%d", &b);
		printf("b : %d\n", b);
	} while (a >= b);
	printf("b - a = %d", b - a);
}