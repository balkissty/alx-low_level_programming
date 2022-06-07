#include "main.h"

/**
 * print_alphabet_x10 - 10x the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int times = 1;
	char alphabet;

	for (; times <= 10; times++)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
