#include <stdio.h>

int main()
{
	int num;
	do {
		printf("Enter a positive number : ");
		scanf_s("%d", &num);
	} while (num < 1);
	int i = 1;
	while (i <= num)
	{
		for (int j = 1; j <= num; j++)
		{
			printf("*");
		}
		putchar('\n');
		i++;
	}

}