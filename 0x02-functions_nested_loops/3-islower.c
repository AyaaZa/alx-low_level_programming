#include "main.h"

/**
 * _islower - clecks letter case
 * @c: value
 * Return: 1 if succeful
 */

int _islower(int c)
{
if (c > 'a' && c < 'z')
	return (1);
else
	return (0);
}
