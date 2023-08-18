#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_largest_char - Find the largest character in the username
 * @username: Pointer to the username
 * @length: Length of the username
 * Return: The biggest number
 */
int multiply_chars(char *username, int length);
int generate_random_char(char *username);
int find_largest_char(char *username, int length)
{
	int current_char, i, rand_num;

	current_char = *username;

	for (i = 0; i < length; i++)
	{
		if (current_char < username[i])
			current_char = username[i];
	}

	srand(current_char ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * multiply_chars - Multiply each character of the username
 * @username: Pointer to the username
 * @length: Length of the username
 * Return: Multiplied character
 */
int multiply_chars(char *username, int length)
{
	int sum = 0, i;

	for (i = 0; i < length; i++)
	{
		sum = sum + username[i] * username[i];
	}

	return (((unsigned int)sum ^ 239) & 63);
}

/**
 * generate_random_char - Generate a random character
 * @username: Pointer to the username
 * Return: A random character
 */
int generate_random_char(char *username)
{
	int total_chars = *username;
	int random_char = 0, i;

	for (i = 0; i < total_chars; i++)
	{
		random_char = rand();
	}

	return (((unsigned int)random_char ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, sum, i;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};
	(void) argc;

	/* Calculate length of username */
	for (length = 0; argv[1][length]; length++)
		;

	keygen[0] = ((char *)alph)[(length ^ 59) & 63];

	sum = 0;
	for (i = 0; i < length; i++)
	{
		sum = sum + argv[1][i];
	}
	keygen[1] = ((char *)alph)[(sum ^ 79) & 63];

	sum = 1;
	for (i = 0; i < length; i++)
	{
		sum = argv[1][i] * sum;
	}
	keygen[2] = ((char *)alph)[(sum ^ 85) & 63];

	keygen[3] = ((char *)alph)[find_largest_char(argv[1], length)];

	keygen[4] = ((char *)alph)[multiply_chars(argv[1], length)];

	keygen[5] = ((char *)alph)[generate_random_char(argv[1])];
	keygen[6] = '\0';

	for (i = 0; keygen[i]; i++)
	{
		printf("%c", keygen[i]);
	}

	return 0;
}
