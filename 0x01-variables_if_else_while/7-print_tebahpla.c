#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
  *main - main block
  *Description:'Print lowercase alphabet in reverse'
  *Return: 0
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}

	putchar('\n');
	return (0);
}
