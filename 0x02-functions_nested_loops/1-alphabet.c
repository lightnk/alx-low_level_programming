#include "main.h"

/**
*print_alphabet_x10 - prints alphabet 10 times 
*
*Return: Always 0 (Succes)
*
*/

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
