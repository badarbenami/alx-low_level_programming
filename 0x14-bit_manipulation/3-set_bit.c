#include "main.h"

/**
 * set_bit---sets a bit at a given index to one.
 * @n:the nmbr to be changed as a pointer.
 * @index: index to set the bit to one.
 *
 * Return:One for achievement,one for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
