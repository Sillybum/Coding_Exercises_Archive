#include <stdio.h>

void spyra(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i + n - 1; j++)
		{
			if (j <= n - i)
				putchar(' ');
			else
				putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');
}

int main()
{
	spyra(3);
	spyra(4);
	spyra(5);
}