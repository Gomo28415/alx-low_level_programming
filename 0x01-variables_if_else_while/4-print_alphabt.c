#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
  *main - Entry point
  *Description: 'Print numbers of base 10'
  *Return: 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
