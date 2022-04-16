#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: the char to print
 * Return: write(1, &c, 1)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
