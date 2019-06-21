#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char h = '0';
for (h = '0'; h <= '9' ; h++)
{
putchar(h);
}
h = 'a';
for (h = 'a'; h <= 'f' ; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
