#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count = 0;

int process(char *str, int n)
{
	count++;
	int i, j, step = 1, len;
	len = strlen(str);
	
	while (step <= len / 2)
		{
			i = 0;
			j = step;
			while (j < len)
				{
					if (str[i] == str[j])
						{
							i++;
							j++;
							if (j % step == 0)
								i = 0;
						}
					else
						break;
				}
			if (j == len && i == 0 && count != n)
				{
					printf("%d\n\n", step);
					return 0;
				}
			if (j == len && i == 0 && count == n)
				{
					printf("%d\n", step);
					return 0;
				}
			
			++step;
		}
	 
	if (step == (len / 2 + 1) && count != n)
		printf("%d\n\n", len);

	if (step == (len / 2 + 1) && count == n)
		printf("%d\n", len);

	return 0;
}


int main(int argc, char *argv[])
{
	int i, n;
	scanf("%d", &n);
	char **s = (char**)malloc(n * sizeof(char*));
	for (i = 0; i < n; i++)
		s[i] = (char*)malloc(85 * sizeof(char));

	for (i = 0; i < n; i++)
		scanf("%s", s[i]);

	for (i = 0; i < n; i++)
		process(s[i], n);
	
	return 0;
}
