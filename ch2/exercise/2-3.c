#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, n, j;
	scanf("%d", &n);

	int tot = 2 * n - 1, delta = 0, cur = tot;
	for (i = 0; i <= n - 1; i++)
		{
			j = 0;
			while(j < i)
				{
					printf(" ");
					j++;
				}
			
			j = 0;
			while(j < cur)
				{
					printf("#");
					j++;
				}
			printf("\n");
			cur -= 2;
		}
	
	return 0;
}
