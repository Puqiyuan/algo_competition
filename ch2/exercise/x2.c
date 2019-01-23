#include <stdio.h>

int main(int argc, char *argv[])
{
	double i;
	for (i = 0; i != (double)10; i += 0.1)
		printf("%.1f\n", i);
	
	return 0;
}
