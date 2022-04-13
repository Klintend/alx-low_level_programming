#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: The letter to print, lowercase or uppercase
 * Return: 0 and 1
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
