#include <stdio.h>
void sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	   for(j=0;j<n-1-i;j++)
	   {
	   	int temp;
	   	if(a[j]>a[j+1])
	   	{
	   		temp=a[j];
	   		a[j]=a[j+1];
	   		a[j+1]=temp;
		   }
	   }
}
int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[100],b[100];
	int i,j,k,t,p;
	t=0;
	p=0;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(k=m;k<m+n;k++)
	{
		
		
			a[k]=b[t];
			t++;
		
	}
	sort(a,m+n);
	for(p=0;p<m+n;p++)
	printf("%d ",a[p]);
	return 0;
	 
}
