#include <stdio.h>

int main(int argc, char *argv[])
{
	int tot = 0;
	char ch;
	while ((ch = getchar()) != EOF)
		if (ch == '1')
			++tot;
	printf("%d\n", tot);
	return 0;
}

