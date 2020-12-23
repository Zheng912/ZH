#include <stdio.h>
int shuixian(int t)
{
	int ret;
	ret=-1;
	int m,n,p,q;
	m=t%100;
	n=m%10;
	p=(t-m)/100;
	q=(m-n)/10;
	if(t==(p*p*p)+(q*q*q)+(n*n*n))
	{
		ret=1;
	}
	else
	    ret=0;
	return ret;
}
int main(void)
{
	int i,T;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		if(100<=m&&m<=999&&100<=n&&n<=999)
		{
			int t;
			int result;
			result=0;

			for(t=m;t<n;t++)
			{
				
			
				if(shuixian(t))
				{
				printf("%d ",t);
				result=1;
				}
			}
			if(result==0)
			  printf("-1\n");
			
		}
	}
	return 0;
 } 
