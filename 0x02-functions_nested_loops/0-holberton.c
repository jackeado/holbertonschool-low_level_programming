#include "holberton.h"

/**
*main prints out Holberton, follow by New line
*
*Return 0
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
