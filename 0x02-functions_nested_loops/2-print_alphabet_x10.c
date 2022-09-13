#include "main.h"

/**
 * print_letter_10times - prints alphabets in lowercase ten times
 */

void print_letter_10time(void)
{
	char ch;
	int i = 1;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
