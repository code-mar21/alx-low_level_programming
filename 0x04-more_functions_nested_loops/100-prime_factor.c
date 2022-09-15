#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long number = 612852475143, div;

	while (div < (number / 2))
	{
		if ((number % 2) == 0)
		{
			number /= 2;
			continue;
		}

		for (div = 3; div < (number / 2); div += 2)
		{
			if ((number % div) == 0)
				number /= div;
		}
	}

	printf("%ld\n", number);

	return (0);
}
