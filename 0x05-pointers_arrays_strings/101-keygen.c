#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char password[13];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int charset_size = sizeof(charset) - 1;

	srand(time(NULL));
	for (int i = 0; i < 12; i++)
	{
		password[i] = charset[rand() % charset_size];
	}
	password[12] = '\0';
	 printf("%s\n", password);
	 return (0);
}
