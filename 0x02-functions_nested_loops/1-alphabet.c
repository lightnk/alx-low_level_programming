#include "main.h"

/**
 *
* Print_alphabet -> prints the lowercase alphabets
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
