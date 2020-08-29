/*
 * Author: Cauchy Pu(pqy7172@gmail.com)
 * How to use these codes is up to you, please feel free.
 */
#include <stdio.h>

void print_subset(int n, int s)
{
	for (int i = 0; i < n; i++)
		if (s & (1 << i)) printf("%d ", i);
	printf("\n");
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < (1 << n); i++)
		print_subset(n, i);
	
    return 0;
}

