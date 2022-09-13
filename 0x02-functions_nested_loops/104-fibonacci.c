#include <stdio.h>
#define MAX 10000000000
/**
 * main - main block
 * Description: print the first 98 fibonachi
 * Return: 0
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int x, y, z;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > MAX || fr2 > 0 || fr1 > 0)
		{
			x = (bk1 + bk2) / MAX;
			y = (bk1 + bk2) % MAX;
			z = fr1 + fr2 + x;
			fr1 = fr2, fr2 = z;
			bk1 = bk2, bk2 = y;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			y = bk1 + bk2;
			bk1 = bk2, bk2 = y;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
