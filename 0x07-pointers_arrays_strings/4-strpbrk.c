#include "holberton.h"
/**
 *
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)

{
	unsigned int q, w;

	q = 0;
	while(s[q])
	{
		w = 0;
			while(accept[w])
			{
				if(s[q] == accept[w])
					return(s + q);
				w++;
			}
		q++;
	}
	return(0);

}
