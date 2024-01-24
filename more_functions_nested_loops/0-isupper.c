#include "main.h"
#include <stdio.h>


/**
 * _isupper - looks for upper case characters.
 * 
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
{
		return (1);
}
	else
{
		return (0);
}
}
