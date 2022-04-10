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
char str[] = "size of ";
float f;
long int li;
long long int lli;
char c;
printf("%s""a char: %lu byte(s)\n", str, (unsigned long)sizeof(c));
printf("%s""an int: %d byte(s)\n", str, (int)sizeof(i));
printf("%s""a long int: %ld byte(s)\n", str, (long int)sizeof(li));
printf("%s""a long long int: %lld byte(s)\n", str, (long long int)sizeof(lli));
printf("%s""a float: %g byte(s)\n", str, (float)sizeof(f));
return (0);
}
