#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	float sum=0;//用float而不用int 
	float result;
	for(i=0;i<n;i++)
	{
		int a[20];
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	result=sum/n;//如果相除两个数都是整数，则结果也为整数，小数部分省略。而两数中有一个为小数，结果则为小数。 
	printf("%.2f",result);
	return 0;
}
