#include <unistd.h>

/**
 * _putchar : Write the character c to stdout
 * @c : char to be printed
 * Return : on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
