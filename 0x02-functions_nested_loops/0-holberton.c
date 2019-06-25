#include "holberton.h"

/**
 * main - this is my function
 *
 * A column of asterisks on the left side,
 * Return: with beginning and ending almost-blank lines.
 */

int main(void)
{
int v;
char hol[9] = "Holberton";
for (v = 0; v < 9; v++)
{
_putchar(hol[v]);
}
_putchar('\n');
return (0);
}
