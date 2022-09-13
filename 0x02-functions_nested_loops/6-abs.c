#include "main.h"
/**
 * _abs - check absolute value of an integer
 *
 * @n : the integer tested
 *
 * Return: absolute value of the integer
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
