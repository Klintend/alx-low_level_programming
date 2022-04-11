#include <stdio.h>

/**
 * main - Entry point
 *
 * Printing alphabets in lowercase and in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char ca;
char cA;
char ASCII = '\n';
for (ca = 'a'; ca <= 'z'; ca++)
{
putchar(ca);
}
for (cA = 'A'; cA <= 'Z'; cA++)
{
putchar(cA);
}
putchar(ASCII);
return (0);
}
