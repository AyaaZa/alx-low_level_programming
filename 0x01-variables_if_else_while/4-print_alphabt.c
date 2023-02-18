#include <stdio.h>

/**
 * main - except e and q
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
