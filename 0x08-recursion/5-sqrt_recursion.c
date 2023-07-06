#include "main.h"
/**
  * _sqrt_recursion - natural square root.
  * @n: n of the fuction _sqrt_recursion.
  * @sqrt: number for power.
  * Return: resulting square root.
  */
int _sqrt(int n, int sqrt)
{
	if (n == 0 || n == 1)
		return (n);
	else if	(sqrt * sqrt == n)
		return (sqrt);
	else if (sqrt * sqrt > n)
		return (-1);
	return (_sqrt(n, sqrt + 1));
}
/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: number.
  *
  * Return: sqrt.
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
