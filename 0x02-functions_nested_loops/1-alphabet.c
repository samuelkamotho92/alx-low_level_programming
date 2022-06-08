#include "main.h"
/**
 * main - prints the alphabet in lowercase
 *
 * Description: print alphabet prints alphabet in lowercase
 *
 * Return: Alwyas (0) success
 */
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}

