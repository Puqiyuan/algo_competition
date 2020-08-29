#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, i, k;
	unsigned long mul;
	double sum = 0.0;
	scanf("%d", &n);

	for (i = 1; i <= n; ++i)
		{
			mul = 1;
			for (k = 1; k <= i; ++k)
				mul *= k;
			sum += 1.0/mul;
			printf("sum:\t%lf\n", sum);
		}
	
    return 0;
}
