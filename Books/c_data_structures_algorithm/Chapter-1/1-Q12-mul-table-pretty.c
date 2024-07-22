#include <stdio.h>

int main()
{
	printf("   |");
	for (int i = 1; i < 10; i++)
	{
		printf("%3d", i);
	}
	putchar('\n');
	for (int i = 1; i < 11; i++)
	{
		if (i == 2)
			printf("+--");
		else
			printf("---");
	}
	putchar('\n');
	for (int i = 1; i < 10; i++)
	{
		printf(" %d |", i);
		for (int j = 1; j < 10; j++)
		{		
			printf("%3d", i * j);
		}
		putchar('\n');
	}
}