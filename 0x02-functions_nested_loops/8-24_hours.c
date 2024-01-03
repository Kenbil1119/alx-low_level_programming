#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Function print the 24 hours of each minutes.
 */

void jack_bauer(void)
{
	char m1, m2;
	int s1, s2;

	for (m1 = '0'; m1 <= '2'; m1++)
	{
		for (m2 = '0'; m2 <= '9'; m2++)
		{
			for (s1 = '0'; s1 < '6'; s1++)
			{
				for (s2 = '0'; s2 <= '9'; s2++)
				{
					_putchar(m1);
					_putchar(m2);
					_putchar(':');
					_putchar(s1);
					_putchar(s2);
					_putchar(10);

					if ((m1 == '2' && m2 == '3') && (s1 == '5' && s2 == '9'))
						return;
				}
			}
		}
	}
}
