#include "main.h"

/**
 * main - Entry point
 *
 * _islower - Short description, single line 
 * @c: conatins value compared
 *
 * Return: Always 0
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
