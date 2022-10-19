#include "main.h"
/**
 * times_table - print the 9 times_table
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar('_');

			prod = num * mult;

			if (prod <= 9)
				_putchar('_');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}

}
