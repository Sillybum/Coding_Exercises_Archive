#include <stdio.h>

int gauss_sum(int n)
{
	if (n % 2 == 0)
		return (1 + n) * (n / 2);
	else
		return (1 + n) * (n / 2) + (1 + n) / 2;
}

int main()
{
	printf("%d\n", gauss_sum(3));
	printf("%d\n", gauss_sum(2));
	printf("%d\n", gauss_sum(5));
	printf("%d\n", gauss_sum(10));
	printf("%d\n", gauss_sum(1));
}
