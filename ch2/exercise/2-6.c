#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, n2, n3, i1, j1, k1, i2, j2, k2, i3, j3, k3, i;
	int flags[10];

	for (n = 100; n <= 333; n++)
		{
			for (i = 1; i < 10; i++)
				flags[i] = 0;
			
			flags[n/100] = n / 100;
			flags[(n % 100) / 10] = (n % 100) / 10;
			flags[n % 10] = n % 10;

			n2 = 2 * n;
			flags[n2 / 100] = n2 / 100;
			flags[(n2 % 100) / 10] = (n2 % 100) / 10;
			flags[n2 % 10] = n2 % 10;

			n3 = 3 * n;
			flags[n3 / 100] = n3 / 100;
			flags[(n3 % 100) / 10] = (n3 % 100) / 10;
			flags[n3 % 10] = n3 % 10;
			
			for (i = 1; i < 10; i++)
				{
					if (flags[i] != 0)
							continue;
					else
						break;
				}
			if (i == 10)
				printf("%d %d %d\n", n, n2, n3);
		}

	return 0;
}
	
