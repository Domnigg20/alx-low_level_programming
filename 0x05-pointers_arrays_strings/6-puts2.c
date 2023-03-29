#include "main.h"

/**
 * puts2 - prnts one char out of 2 of a str
 * followd by a new line
 * @str: string to prnt the chars frm
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
