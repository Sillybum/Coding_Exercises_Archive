#include <stdio.h>

void numpyra(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= (n*2 -i); j++)
		{
			if (j >= i)
				printf("%d", i);
			else
				putchar(' ');
		}
		putchar('\n');
	}
	putchar('\n');
}

int main()
{
	numpyra(3);
	numpyra(4);
	numpyra(5);
	numpyra(6);
}