#include <stdio.h>

/**
 * main - Print the number of arguments passed
 * @argc: size of *argv
 * @argv: array of strings
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
