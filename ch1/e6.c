#include <stdio.h>

int main(int argc, char *argv[])
{
  int a, b, c, t;
  scanf("%d%d%d", &a, &b, &c);
  if (a > b) {t = a; a = b; b = t;}
  if (a > c) {t = a; a = c; c = t;}
  if (b > c) {t = b; b = c; c = t;}

  if (a + b > c)
    {
      if (c * c == a * a + b * b)
	printf("yes\n");
      else
	printf("no\n");
    }
  else
    printf("not a triangle\n");
	
  return 0;
}
