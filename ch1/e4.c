#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  const double pi = acos(-1.0);
  int n;
  scanf("%d", &n);
  printf("%.3lf %.3lf\n", sin(pi * n / 180), cos(pi * n / 180));
  return 0;
}
