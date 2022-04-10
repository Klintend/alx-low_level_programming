#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i;
char str[40] = "size of a char: ";
float f;
long int li;
long long int lli;
char c;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %d byte(s)\n", (int)sizeof(i));
printf("size of a long int: %ld byte(s)\n", (long int)sizeof(li));
printf("size of a long long int: %lld byte(s)\n", (long long int)sizeof(lli));
printf("size of a float: %g byte(s)\n", (float)sizeof(f));
return (0);
}
