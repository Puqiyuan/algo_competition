#include <stdio.h>

int main(int argc, char *argv[])
{
	int hi, mi, lo, n;
	for (n = 100; n <= 999; n++)
		{
			hi = 0, mi = 0, lo = 0;
			hi = n / 100;
			lo = n % 10;
			mi = (n/10) % 10;
						
			if (hi*hi*hi + mi*mi*mi + lo*lo*lo == n)
				printf("%d\n", n);
		}
	
	return 0;
}
