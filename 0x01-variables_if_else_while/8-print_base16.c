#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char p = '0';
for (p = '0'; p <= '9' ; p++)
{
putchar(p);
}
p = 'a';
for (p = 'a'; p <= 'f' ; p++)
{
putchar(p);
}
putchar('\n');
return (0);
}
