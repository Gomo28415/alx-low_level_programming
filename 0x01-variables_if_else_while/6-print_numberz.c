#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
  *main - main block
  *Description: 'Print all single digit numbers of base 10
  *Return: 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}

	putchar('\n');
	return (0);
}
