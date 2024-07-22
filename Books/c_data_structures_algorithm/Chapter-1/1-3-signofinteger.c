#include <stdio.h>

int main()
{
	int n;

	printf("Enter an integer : ");
	scanf_s("%d", &n);
	if (n > 0)
		printf("It's a positive number.\n");
	else if (n < 0)
		printf("It's a nagative number\n");
	else
		printf("You entered a 0.");
	return 0;
}
