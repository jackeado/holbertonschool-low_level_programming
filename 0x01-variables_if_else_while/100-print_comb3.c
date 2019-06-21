#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
int k = '0';
for (i = '0'; i <= '9' ; i++)
{
for (k = '0'; k <= '9' ; k++)
{
if (i != k && i <= k)
{
putchar(i);
putchar(k);
}
if ((i != k && i <= k) && (i != '8' || k != '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
