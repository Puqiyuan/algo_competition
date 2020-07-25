/*
 * Author: Cauchy Pu(pqy7172@gmail.com)
 */

#include <stdio.h>
#include <stdlib.h>

//note that I did not consider the printing format that specifies in 11059.pdf file.
int main(int argc, char *argv[])
{
	int n, i, j, start, stop;
	//note that unsigned can be problem
	long long max = 0, tmp_max;
	scanf("%d", &n);
	int data[n];

	for (i = 0; i < n; ++i)
		scanf("%d", &data[i]);

	for (i = 0; i < n; ++i)
		{
			tmp_max = data[i];
			for (j = i + 1; j < n; ++j)
				{
					//if tmp_max is unsigned, but data[j] is int, will cast, so will be problem
					tmp_max *= data[j];
					//current is the shorest sequence, is you want the longest, change > to >=
					//1 2 3 4 5 6 -1 -1 is the example
					if (tmp_max > max)
						{
							max = tmp_max;
							start = i;
							stop = j;
						}
				}
		}
	
	printf("the maximum is %lu\n", max);
	printf("start: %d, stop: %d\n", start, stop);
	printf("the sequence is:\n");
	for (i = start; i <= stop; ++i)
		printf("%d ", data[i]);
	printf("\n");
	
    return 0;
}
