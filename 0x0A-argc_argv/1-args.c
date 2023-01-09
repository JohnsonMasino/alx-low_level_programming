#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0 (Success)
 * Code by Masino
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv */

	printf("%d\n", argc - 1);
	return (0);
}
