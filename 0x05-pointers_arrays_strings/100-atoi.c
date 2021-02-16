#include "holberton.h"
#include <stdio.h>

int _atoi(char *s)
{	
	if (*s == '\0')
        return (0);
 
	int res = 0;
	int sign = 1;
	int idx = 0;

	if (s[0] == '-')
	{
		sign = -1;
		idx++;
	}


	for (; s[idx] != '\0'; ++idx)
		res = res * 10 + s[idx] - '0';

	return (sign * res);
}

int main(void)
{
    int n;

    n = _atoi("98");
    printf("%d\n", n);
    n = _atoi("-402");
    printf("%d\n", n);
    n = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("214748364");
    printf("%d\n", n);
    n = _atoi("0");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", n);
    n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", n);
    return (0);
}