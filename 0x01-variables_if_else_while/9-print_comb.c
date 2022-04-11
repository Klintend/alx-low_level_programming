#include<stdio.h>

/**
 * main - Entry point
 *
 * Possible combination
 *
 * Return: Always 0 (Success)
 */
int main()
{
int ASCII1 = 10;
int x;
int ASCII = 44;
int _ASCII = 32;
for (x = '0' ; x <= '9' ; x++)
{
putchar(x);
putchar(ASCII);
putchar(_ASCII);
}
putchar(ASCII1);
return 0;
}
