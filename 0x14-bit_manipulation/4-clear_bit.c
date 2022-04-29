#include "main.h"

/**
 * clear_bit - this sets the value of a bit to 0.
 * @n: the pointer of an unsigned long int.
 * @index: the index of the bit.
 *
 * Return: 1 if it works, -1 if it does not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
