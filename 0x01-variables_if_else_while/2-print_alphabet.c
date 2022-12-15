/*
 * file: 2-print_alphabet.c
 * Auth: sunday c sunday
 * /
 
#include <stdio.h>

/*
 * main- print alphabet in lower case
 *
 * Return: Always 0.
 */
int main(void)
	{
		char letter;
		
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');

		return (0);
	}
