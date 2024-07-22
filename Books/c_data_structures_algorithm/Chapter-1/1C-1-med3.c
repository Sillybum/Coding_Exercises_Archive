#include <stdio.h>

void med3(int a, int b, int c)
{
	int med;
	if (a >= b)
	{
		if (b >= c)
			med = b;
		else if (a >= c)
			med = c;
		else
			med = a;
	}
	else if (a >= c)
		med = a;
	else if (b >= c)
		med = c;
	else
		med = b;
	printf("The middle value among %d, %d, %d is %d.\n", a, b, c, med);
}

int main()
{
	med3(1, 2, 5);
	med3(2, 6, 4);
	med3(43, 32, 32);
	med3(34, 34, 22);
	med3(100, 300, 200);
	med3(1000, 500, 100);
}