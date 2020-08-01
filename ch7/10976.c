/*
 * Author: Cauchy Pu(pqy7172@gmail.com)
 * How to use these codes is up to you, please feel free.
 */

/*
  Problems:
  Enter a positive integer k, find all positive integers x>=y, such that 1/k = 1/x + 1/y
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int k, y = 1;
	float x;
	scanf("%d", &k);

	while( y <= 2 * k)
		{
			if (y != k)
				x = (y * k) / (y - k);
			if (x - (int)x == 0 && x > 0)
				printf("1/%d = 1/%d + 1/%d\n", k, (int)x, y);
			++y;
		}
		
    return 0;
}
