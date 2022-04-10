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
char str1[40] = "size of an int: ";
char str2[40] = "size of a long int: ";
char str3[40] = "size of a long long int: ";
char str4[40] = "size of a float: ";
float f;
long int li;
long long int lli;
char c;
printf("%s""%lu byte(s)\n", str, (unsigned long)sizeof(c));
printf("%s""%d byte(s)\n", str1, (int)sizeof(i));
printf("%s""%ld byte(s)\n", str2, (long int)sizeof(li));
printf("%s""%lld byte(s)\n", str3, (long long int)sizeof(lli));
printf("%s""%g byte(s)\n", str4, (float)sizeof(f));
return (0);
}
