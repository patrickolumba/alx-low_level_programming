#include <stdio.h>

/**
 * main - this fuction prints the numbaer of arguments passed into it.
 * @argc: arguments counter
 * @argv: arguments pointer to array.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

