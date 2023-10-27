#include "main.h"

/**
 * get_endianness-determines whether a machine is large or tiny endian.
 * Return:zero for big, one for little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
