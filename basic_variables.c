#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * put_char - print char
 * @x: character
 *
 * Description: print char
 *
 * Return: integr value
*/

int put_char(char x)
{
	write(1, &x, 1);
	return (1);
}

/**
 * print_string - print string
 * @x: string
 *
 * Description: print string
 *
 * Return: integr value
*/

int print_string(char *x)
{
	int i = 0, l = 0;

	while (x[l])
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		put_char(x[i]);
	}
	return (l);
}

/**
 * print_int - print int
 * @x: int
 *
 * Description: print int
 *
 * Return: integr value
*/

int print_int(int x)
{
	int d[100], temp = x, i = 0;

	if (x == 0)
	{
		put_char('0');
		return (1);
	}
	else if (x < 0)
	{
		put_char('-');
		temp = -1 * temp;
	}
	while (temp)
	{
		d[i] = temp % 10;
		temp = temp / 10;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		put_char(d[j] + '0');
	}
	return (i);
}
