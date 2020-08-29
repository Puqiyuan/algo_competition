#include <stdio.h>

int print(int *C, int n)
{
	int i;
	for (i = 0; i < n; ++i)
		printf("%d ", C[i]);
	printf("\n");

	return 0;
}

void search(int cur, int *tot, int *C, int n)
{
	int i, j;
	
	if (cur == n) {
		(*tot)++;
		//print(C, n);
	}
	else for (int i = 0; i < n; i++) {
			int ok = 1;
			C[cur] = i;
			for (j = 0; j < cur; j++)
				if (C[cur] == C[j] || cur - C[cur] == j - C[j] || cur + C[cur] == j + C[j])
					{ ok = 0; break; }
			if (ok) search(cur+1, tot, C, n);
		}
}

int main(int argc, char *argv[])
{
	int n = 15, tot = 0;
	//scanf("%d", &n);
	int C[n];
	
	search(0, &tot, C, n);
	printf("tot: %d\n", tot);
	
    return 0;
}

