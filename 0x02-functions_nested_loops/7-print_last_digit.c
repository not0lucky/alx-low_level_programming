#include "main.h"
/**
 * print_last_digit - main function
 *
 * @n : the number tested
 *
 *Return: last digit of the number
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
		return (n);
}
