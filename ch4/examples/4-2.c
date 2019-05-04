#include <stdio.h>

long long C(int n, int m)
{
	if (m < n - m)
		m = n - m;
	long long ans = 1; 
	for (int i = m + 1; i <= n; i++)
		ans *= i;
	for (int i = 1; i <= n - m; i++)
		ans /= i;
	return ans;
}

int main(int argc, char *argv[])
{
	printf("%lld\n", C(25, 12));
	
	return 0;
}

