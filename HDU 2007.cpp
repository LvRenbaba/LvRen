#include<stdio.h>
int main(void)
{
	int m,n;  int i,j;
	while( scanf("%d %d",&m,&n)!=EOF )
	{
		 int x=0,y=0,temp=0;
		if( m>n )
		{
			temp=n;
			n=m;
			m=temp;
		}
		for(i=m;i<=n;i++)
		{
			if( i%2==0 )
			{
				x=x+i*i;
			}
			else
			{
				y=y+i*i*i;
			}
		}
		printf("%d %d\n",x,y);
	}
	return 0;
 } 
