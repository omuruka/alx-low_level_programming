#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - main function
* 
*Return: always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	/* your code goes here*/
	if (n > 0)
		prinft("%d is positive", n);
	else if (n == 0)
		prinft("%d is zero", n);
	else
		prinft("%d is negative", n);
	printf("\n)
	return (0);
}

