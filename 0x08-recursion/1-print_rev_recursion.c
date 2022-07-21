#include "main.h"

/**
 *  _puts_recursion - print string
 *  @s: string to print
 *  Description: print string using recursion
 *  Return: nothing
 **/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
