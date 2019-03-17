#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n, i, tmp =10000, info[10], j, len;
	char str[10];
	scanf("%d", &n);
	while (n--)
		{
			scanf("%d", &tmp);
			memset(info, 0, sizeof(info));
			for (i = 1; i <= tmp; i++)
				{
					sprintf(str, "%d", i);
					len = strlen(str);

					for (j = 0; j < len; j++)
						info[(int)(str[j] - 48)]++;
				}

			for (i = 0; i <= 8; i++)
				printf("%d ", info[i]);
			printf("%d\n", info[9]);
		}
			
	return 0;
}
