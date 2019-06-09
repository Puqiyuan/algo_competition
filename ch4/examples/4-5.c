#include <stdio.h>

int swap(int a, int b)
{
	int t = a; a = b; b = t;

	return 0;
}

int main(int argc, char *argv[])
{
	int a = 3, b = 4;
	swap(3, 4);
	printf("%d %d\n", a, b);
	
	return 0;
}
