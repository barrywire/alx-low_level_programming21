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
	/* your code goes there */
	return (0);
}