#include "main.h"

/**
 * Largest_number - returns the largest of 3 numbers
 * int a, int b, int c
 * Return: Largest
 **/

int largest_number(int a, int b, int c);
{
	int largest;
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else
	{
		largest = c;
	}

return (largest);
}
