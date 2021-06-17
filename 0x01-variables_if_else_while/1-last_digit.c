#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main entry point for the program
 * @void: The function does not accept any parameters
 * Return: int returned as 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastNumber = n % 10;
	if (lastNumber > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, lastNumber);
	}else if (lastNumber == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n,lastNumber);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastNumber);
	}
	return (0);
}