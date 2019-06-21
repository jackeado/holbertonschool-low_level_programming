#include <stdio.h>

/**
 * main - Prints Alphabet
 *
 * Description: Prints alphabet in lowercase.
 * It's neccesary  strcpy for copy de char array
 * Return: Always return 0
 */
int main(void)
{
int i = '0';
for (i = '0'; i <= '9' ; i++)
{
if (i <= '9')
{
putchar(i);
}
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
