#include "main.h"
/**
 * _isalpha - checks for char alphabet
 * @c: the char to be checked
 *
 * Return: 1 if char is lower or upper, otherwise retuen 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
