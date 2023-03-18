#include <stdio.h>
/**
 * main - A program that prints the size of various type of computer type
 * Returen 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char: %1u bytes($)\n", (unsigned long)sizeof(a));
printf("Size of char: %1u bytes($)\n", (unsigned long)sizeof(b));
printf("Size of char: %1u bytes($)\n", (unsigned long)sizeof(c));
printf("Size of char: %1u bytes($)\n", (unsigned long)sizeof(d));
printf("Size of char: %1u bytes($)\n", (unsigned long)sizeof(f));
return (0);
}
