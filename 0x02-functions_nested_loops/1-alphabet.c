#include "main.h"
/**
 * print_aphabet - a function that prints the alphabet, in lower case
 * Return : Always 0 (Succes)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
