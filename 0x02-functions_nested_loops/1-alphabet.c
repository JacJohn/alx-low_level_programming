#include "main.h"
include <unistd.h>

/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: void
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
