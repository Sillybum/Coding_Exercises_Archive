#include <stdio.h>

int med3(int a, int b, int c)
{
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a<b && c>b))
		return b;
	return c;
}
int med3_long(int a, int b, int c)
{
	if (b >= a)
	{
		if (c <= a)
			return a;
	}
	if (b <= a)
	{
		if (c >= a)
			return a;
	}
	if (a > b)
	{
		if (c < b)
			return b;
	}
	if (a < b)
	{
		if (c > b)
			return b;
	}
	return c;
}
// To return a value, both function takes at least 2 if calculations and 8 if calculations at most.
// The med3 function in 1C-1.cpp is more efficient.

int main()
{
	printf("%d\n", med3(1, 2, 3));
	printf("%d\n", med3(5, 2, 3));
	printf("%d\n", med3(8, 6, 2));
	printf("%d\n", med3_long(1, 2, 3));
	printf("%d\n", med3_long(5, 2, 3));
	printf("%d\n", med3_long(8, 6, 2));
	return 0;
}
