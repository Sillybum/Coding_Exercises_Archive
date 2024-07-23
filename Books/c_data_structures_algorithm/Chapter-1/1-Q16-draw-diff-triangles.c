#include <stdio.h>

void triangleLB(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');
}

void triangleLU(int n)
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');
}

void triangleRB(int n)
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i > j)
				putchar(' ');
			else
				putchar('*');
		}
		putchar('\n');
	}
	putchar('\n');
}

void triangleRU(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i > j)
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
	triangleLB(6);
	triangleLU(6);
	triangleRB(6);
	triangleRU(6);
}