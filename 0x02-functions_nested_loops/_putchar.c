#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 * Return: 0n Success 1.
 * 0n error, -1 is returned, and errno is set appropriately
 */

int _putchar (char c)
{
 (write(1, &c, 1));
 return (1);
}                
