#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing Alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char ch;
char ASCII = '\n';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar(ASCII);
return (0);
}
