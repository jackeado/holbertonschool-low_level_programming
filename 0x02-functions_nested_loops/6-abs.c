#include "holberton.h"

/**
 * _abs - computes absolute value of int
 * @p: interger to computer
 *
 * Return: absolute value;
 */
int _abs(int p)
{
	if (p < 0)
	{
		p = p * -1;
		return (p);
	}
	else
	{
		return (p);
	}

}
