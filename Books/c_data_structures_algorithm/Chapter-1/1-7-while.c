#include <stdio.h>

int main()
{
	int n;
	puts("It sums up every integer from 1 to n.");
	printf("n = ");
	scanf_s("%d", &n);
	int sum = 0;
	int i = 1;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("The result value is %d.", sum);
	return 0;
}
