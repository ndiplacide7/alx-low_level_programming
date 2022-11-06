#include "main.h"
/**
 * print_aphabet - a function that prints the alphabet, in lower case
 *
 * Description: A function that print the alphabet in lowercase
 *
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
