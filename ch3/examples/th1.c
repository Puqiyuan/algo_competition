#include <stdio.h>
#include <stdlib.h>

void count()
{
	int n, ct = 0;
	while (1 == scanf("%d", &n))
		++ct;
	printf("You've inputted %d numbers\n", ct);
}

void maxMinAverage()
{
	int n, max, min, sum = 0, ct = 0, first = 1;
	while (1 == scanf("%d", &n))
		{
			if (first) { max = min = n; first = 0; }
			if (max < n) max = n;
			if (n < min) min =n;
			sum += n;
			++ct;
		}
	printf("max:%d min:%d average:%.3f\n", max, min, sum * 1.0 / ct);
}

int main(int argc, char *argv[])
{
	//count();
	maxMinAverage();
	return 0;
}

