#include <stdio.h>
#include <math.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		float m;
		scanf("%f",&m);
		if(m<0)
		{
			printf("ERROR\n");
		}
		else {
			double result;
		result=sqrt(m);
		printf("%.2f\n",result);
		}
	}
	return 0;
}
