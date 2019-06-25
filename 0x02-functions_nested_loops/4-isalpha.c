#include "holberton.h"
/**
 *_isalpha - checks for an alphabetic character
 * @c: char to check if alpha
 *Return: 1 if c is letter;
 */
int _isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
