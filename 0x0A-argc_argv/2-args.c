#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: arguments count
 * @argv: arrays of arguments
 * Return: Always 0 (Success)
 * Code by Masino
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
