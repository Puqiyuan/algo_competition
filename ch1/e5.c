#include <stdio.h>

int main(int argc, char *argv[])
{
  int n;
  double tmp;
  scanf("%d", &n);
  tmp = 95 * n;

  if (tmp >= 300)
    printf("%.3lf\n", tmp * 0.85);
  else
    printf("%.3lf\n", tmp);

  return 0;
}
