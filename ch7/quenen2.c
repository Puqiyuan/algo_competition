#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int print(int *C, int n)
{
	int i;
	for (i = 0; i < n; ++i)
		printf("%d ", C[i]);
	printf("\n");

	return 0;
}

void search(int cur, int *tot, int *C, int n, int **vis)
{
	printf("OK\n");
	int i, j;
	
	if (cur == n) {
		(*tot)++;
		//print(C, n);
	}
	else for (i = 0; i < n; i++) {
			printf("i:%d\n", i);
			if (!vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+n]) {
				printf("27\n");
				C[cur] = i;
				vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 1;
				search(cur+1, tot, C, n, vis);
				vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 0;
			}
		}
}


int main(int argc, char *argv[])
{
	int n = 15, tot = 0, i;
	//scanf("%d", &n);
	int C[n];
	int **vis = (int**)malloc(sizeof(int*) * 3);
	for (i = 0; i < 3; ++i)
		vis[i] = (int*)malloc(sizeof(int) * 2 * n);

	memset(vis, 0, sizeof(vis));
	search(0, &tot, C, n, vis);
	printf("tot: %d\n", tot);
	
    return 0;
}

