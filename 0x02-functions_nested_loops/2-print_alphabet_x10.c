#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int tentimes;
	char low;

	for (tentimes = 0; tentimes <= 9; tentimes++)
	{
		for (low = 'a'; low <= 'z'; low++)
		{
			_putchar(low)
		}
		_putchar('\n')
	}
}
