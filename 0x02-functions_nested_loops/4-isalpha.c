#include "main.h"
/**
 * _isalpha - checks for a lowercase or uppercase character.
 *
 * @c: is c an integer argument
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
