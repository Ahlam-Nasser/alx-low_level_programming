#include <stdio.h>
/**
 *  main - entry point
 *  Description: print all alphabet letters in lowercase and uppercase
 *  Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchr(CH);
		CH++;
	}
	putchr('\n');

	return (0);
}
