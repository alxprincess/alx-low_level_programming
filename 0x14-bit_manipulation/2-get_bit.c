#include"main.h"

/**
 * get_bit - prog return the value of a bit at given index
 * @n: number assigned to check bits in
 * @index: the index to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divisor, check;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
divisor = 1 << index;
check = n & divisor;
if (check == divisor)
return (1);
return (0);
}
