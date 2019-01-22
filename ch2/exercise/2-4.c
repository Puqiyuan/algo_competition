#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m, i, kase = 0;
	scanf("%d %d", &n, &m);
	double sum = 0, tmp;
	while (n != 0 && m != 0)
		{
			for (i = n; i <= m; i++)
				{
					tmp = 1.0 / ((double)i * (double)i); // change to double for big intger
					//otherwise overflow
					sum += tmp;
				}
			printf("Case %d: %.5lf\n", ++kase, sum);
			scanf("%d %d", &n, &m);
		}
	
	return 0;
}
