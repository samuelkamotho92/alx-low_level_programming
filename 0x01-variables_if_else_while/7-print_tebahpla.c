#include<stdio.h>
/**
 * main-lowercase
 *
 * Return:Always 0 (succes)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
