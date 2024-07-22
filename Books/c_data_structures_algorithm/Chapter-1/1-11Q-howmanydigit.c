#include <stdio.h>

int main()
{
	int i;
	do {
		printf("Enter a positive number : "); scanf_s("%d", &i);
	} while (i < 1);
	
	int digit = 1;
	
	while (i > 9)
	{
		if (i / 10 >= 1)
			i = i / 10;
			digit++;
	}
	printf("The number you entered is %d digit(s).", digit);
}