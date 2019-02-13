#include <stdio.h>
#include <string.h>
#define maxn 1000000 + 10
int main(int argc, char *argv[])
{
	char s[maxn];
	scanf("%s", s);
	int tot = 0, i;
	for (i = 0; i < strlen(s); i++)
		{
			if (s[i] == '1')
				tot++;
		}
	printf("%d\n", tot);
	return 0;
}
