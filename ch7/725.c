#include <stdio.h>
#include <string.h>

int show_nums(int *nums)
{
	int i;

	for (i = 9; i >= 0; --i)
		printf("%d ", nums[i]);

	printf("\n");
}

int is_repeat(int *nums, int d1, int d2)
{
	int i;
	
	for (i = 0; i <= 9; ++i)
		{
			if (nums[i] != i + 1)
				return 1;
		}

	return 0;
}

int main(int argc, char *argv[])
{
	int n, i, j, k, l, m, divisor, dividend, digit, factor, divisor_bak, nums[10];
	scanf("%d", &n);

	for (i = 0; i <= 9; ++i)
		{
			for (j = 0; j <= 9; ++j)
				{
					for (k = 0; k <= 9; ++k)
						{
							for (l = 0; l <= 9; ++l)
								{
									for (m = 0; m <= 9; ++m)
										{
											memset(nums, 0, sizeof(nums));
											nums[i] = i + 1, nums[j] = j + 1, nums[k] = k + 1, nums[l] = l + 1, nums[m] = m + 1;
											dividend = i * 10000 + j * 1000 + k * 100 + l * 10 + m;

											divisor = dividend * n;
											if (divisor > 99999) return 0;

											divisor_bak = divisor, factor = 10000;
											while (divisor != 0)
												{
													digit = divisor / factor;
													nums[digit] = digit + 1;
													divisor -= digit * factor;
													factor /= 10;
												}
											if (!is_repeat(nums, dividend, divisor))
												printf("%d / %d%d%d%d%d = %d\n", divisor_bak, i, j, k, l, m, n);
										}
								}
						}
				}
		}
	
    return 0;
}
