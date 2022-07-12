#include "main.h"

/**
 * _putchar - write to stdout.
 * @c: char to be written.
 *
 * Return: 0on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
