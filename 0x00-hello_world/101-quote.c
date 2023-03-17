#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (indicating an error occurred)
 */

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, message, 54);
	return (1);
}
