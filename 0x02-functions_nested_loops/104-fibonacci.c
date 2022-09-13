#include <stdio.h>
/**
 *
 * main - fibonachi.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
 long int pf, af, f;

	pf = 1;
	af = 2;
	printf("1, ");
	printf("2, ");
	for (i = 0; i < 96; i++)
	{
		f = pf + af;
		pf =abs(af);
		af = abs(f);
		printf("%d", f);
		if (i != 95)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
