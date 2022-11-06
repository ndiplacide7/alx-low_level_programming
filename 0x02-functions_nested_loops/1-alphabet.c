#include "main.h"
/**
 * print_aphabet : Entry point
 * Description: a function that prints the alphabet,
 * in lowercase followed by a new line
 * Return : void
 */
void print_alpabet(void)
{
	char letter = 'a';

	while(leter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
