#include <unistd.h>


/**
 * main - run all functions
 *
 * Description: Change standard error message
 * Return: Return 1 and exit
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
