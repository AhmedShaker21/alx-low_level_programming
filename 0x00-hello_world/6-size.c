#include <stdio.h>
/**
 * main - C program that prints the size of various types
 * Code by Prince Solomon
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %u byte(s)\n", (int) sizeof(a));
	printf("size of a int: %u byte(s)\n", (int) sizeof(b));
	printf("size of a long int: %u byte(s)\n", (int) sizeof(c));
	printf("size of a lolng lolng int: %u byte(s)\n", (int) sizeof(d));
	printf("size of a float: %u byte(s)\n", (int) sizeof(f));
	return (0);
}
