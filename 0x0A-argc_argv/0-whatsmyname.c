#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 * Code by Masino
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
