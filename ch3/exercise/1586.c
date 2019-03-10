#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int len, tmp, i, t;
	float sum;
	char s[85];
	scanf("%d", &t);
	while(t--)
		{
			memset(s, 0, sizeof(s));
			scanf("%s", s);
			len = strlen(s);
			sum = 0;
			for (i = 0; i <= len - 1;)
				{
					if (!(s[i+1] >= '0' && s[i+1] <= '9'))
						{
							tmp = 1;
							if (s[i] == 'C')
								sum += tmp * 12.01;
							if (s[i] == 'H')
								sum += tmp * 1.008;
							if (s[i] == 'O')
								sum += tmp * 16.00;
							if (s[i] == 'N')
								sum += tmp * 14.01;
							i++;
						}
					
					if ((s[i+1] >= '0' && s[i+1] <= '9') && !(s[i+2] >= '0' && s[i+2] <= '9'))
						{
							tmp = (int)(s[i+1] - 48);
							if (s[i] == 'C')
								sum += tmp * 12.01;
							if (s[i] == 'H')
								sum += tmp * 1.008;
							if (s[i] == 'O')
								sum += tmp * 16.00;
							if (s[i] == 'N')
								sum += tmp * 14.01;
							i = i + 2;
						}

					if ((s[i+1] >= '0' && s[i+1] <= '9') && ((s[i+2] >= '0') && s[i+2] <= '9'))
						{
							tmp = (int)(s[i+1] - 48) * 10;
							tmp = tmp + (int)(s[i+2] - 48);
							if (s[i] == 'C')
								sum += tmp * 12.01;
							if (s[i] == 'H')
								sum += tmp * 1.008;
							if (s[i] == 'O')
								sum += tmp * 16.00;
							if (s[i] == 'N')
								sum += tmp * 14.01;
							i = i + 3;
						}
				}
			printf("%.3f\n", sum);
		}
	
	return 0;
}

