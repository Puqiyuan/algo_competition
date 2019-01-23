#include<stdio.h>

int main()
{
	int a,b,c,n=1;
	while(scanf("%d%d%d",&a,&b,&c)&&(a||b||c))
    {
			printf("Case %d: %d.",n++,a/b);
			for(int i=0;i<c-1;i++)
        {
					printf("%d",(a*10/b)%10);
					a=(a*10)%b;
        }
			printf("%d\n",((a*100/b)%100+5)/10);
    }
	return 0;
}
