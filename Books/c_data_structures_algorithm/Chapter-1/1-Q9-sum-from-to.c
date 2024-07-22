#include <stdio.h>

int sumof(int a, int b)
{
	for (int sum = 0; a <= b; a++)
	{
		sum += a;
		if (a == b)
			printf("%d\n", sum);
	}
}

int main()
{
	sumof(0, 10);
	sumof(4, 6);
	sumof(10, 10);
}
