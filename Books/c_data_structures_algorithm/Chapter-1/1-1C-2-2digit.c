#include <stdio.h>

int main()
{
	int no;
	printf("Enter a 2-digit number : ");
	do {
		printf("Your number : ");
		scanf_s("%d", &no);
	} while (no > 99 || no < 10);
	printf("The number you entered is %d", no);
}