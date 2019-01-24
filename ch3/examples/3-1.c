#include <stdio.h>
#define maxn 100000000
//int a[maxn];

int main(int argc, char *argv[])
{
	int x, n = 0, a[maxn];
	while(scanf("%d", &x) == 1)
				a[n++] = x;
	for (int i = n - 1; i >= 1; i--)
		printf("%d ", a[i]);
	printf("%d\n", a[0]);
	
	return 0;
}
