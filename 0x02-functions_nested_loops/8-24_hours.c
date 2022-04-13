#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int hr1;
	int hr2;

	int mn1;
	int mn2;

	int a = 0;

	for (hr1 = 0; hr1 <= 2; hr1++)
	{
		for (hr2 = 0; hr2 <= 9; hr2++)
		{
			if (a == 2 && hr2 == 4)
				break;

			for (mn1 = 0; mn1 < 6; mn1++)
			{
				for (mn2 = 0; mn2 <= 9; mn2++)
				{
					_putchar('0' + hr1);
					_putchar('0' + hr2);
					_putchar(':');
					_putchar('0' + mn1);
					_putchar('0' + mn2);
					_putchar('\n');
				}
			}

		}

		a++;
	}
}
