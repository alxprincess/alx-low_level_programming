#include "main.h"

/**
 * _pow - the function calculates (b ^ p)
 * @b: thebase of the exponent
 * @p: power of the exponent
 *
 * Return: value of (b ^ p)
 */
unsigned long int _pow(unsigned int b, unsigned int p)
{
unsigned long int num;
unsigned int a;

num = 1;
for (a = 1; a <= p; a++)
num *= b;
return (num);
}

/**
 * print_binary - printing a number in binary notation
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;

flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
