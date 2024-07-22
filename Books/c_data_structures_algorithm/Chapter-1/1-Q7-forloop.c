#include <stdio.h>

int main()
{
	int n;
	puts("It sums up every integer from 1 to n.");
	printf("n = ");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
		if (n > i)
			printf("%d + ", i);
		else
			printf("%d = ", i);
	}
	printf("%d", sum);
	return 0;
}
