#include <stdio.h>

int main()
{
	int height = 0;
	int width = 0;
	do {
		printf("Height : ");
		scanf_s("%d", &height);
		printf("Width : ");
		scanf_s("%d", &width);
	} while (height < 1 || width < 1);
	int i = 1;
	while (i <= height)
	{
		for (int j = 1; j <= width; j++)
		{
			printf("*");
		}
		putchar('\n');
		i++;
	}

}