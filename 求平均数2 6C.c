#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i,j;
	float sum=0,result;
	int count=0;
	int b[20];
	for(i=0; i<n; i++)
	{
		
		char a[20];
		scanf("%c",&a[i]);
		char c[20];
		c[0]='n';
		c[1]='/';
		c[2]='a';
		if(strcmp(a,c)==0)
		{
			printf("n/a");
			break;
		}
		else
		{

			if(a[i]!='n')
			{
				count++;
			}
			else
			{

				for(j=0; j<n-count; j++)
				{

					b[j]=a[i];
				}
			}
			sum+=b[j];
		}
	}
	result=sum/n-count;
	printf("%.2f",result);
	return 0;
}
