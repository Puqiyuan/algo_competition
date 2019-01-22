#include <stdio.h>

int main(int argc, char *argv[])
{
#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif
	int a, b, c, n, kase = 0;
	while(scanf("%d %d %d", &a, &b, &c) == 3)
		{
			for (n = 10; n <= 100; n++)
				{
					if (n % 3 == a && n % 5 == b && n % 7 == c)
						{
							printf("Case %d: %d\n", ++kase, n);
							break;
						}
					
				}
			if (n == 101)
				printf("Case %d: No answer\n", ++kase);
		}
	
	return 0;
}
