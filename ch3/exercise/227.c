#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int process(char **char_map, char *moves, int spacei, int spacej)
{
	int i, j;
	for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
				printf("%c", char_map[i][j]);
			printf("\n");
		}

	//printf("moves[%d]: %c\n", i, moves[i]);
	printf("%s\n", moves);
	
	return 0;
}

int main(int argc, char *argv[])
{
	int i, j, spacei, spacej;
	char *moves = (char*)malloc(999999 * sizeof(char)), tmp;
	char **char_map = (char**)malloc(sizeof(char*) * 5);
	for (i = 0; i <= 4; i++)
		char_map[i] = (char*)malloc(sizeof(char) * 5);

	while(1)
		{
			for (i = 0; i < 5; i++)
				{
					scanf("%[^\n]%*c", char_map[i]);
					if (strlen(char_map[i]) < 3)
						return 0;
				}
			
			scanf("%c", &tmp);
			i = 0;
			while (tmp != '0')
				{
					moves[i] = tmp;
					i++;
					scanf("%c", &tmp);
				}
			process(char_map, moves, spacei, spacej);
		}
	
	return 0;
}
