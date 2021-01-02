//顺序输入，用数组下标标记是哪个数字，只需将非零的最小数字输出，并将其个数减一，然后挨个输出数组中非零的即可。 
#include <stdio.h>
int main(void)
{
	int digit[10],result[50];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&digit[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i!=0&&digit[i]!=0)
		{
			
			result[0]=i;
			digit[i]--;
			break;
		}
	}
	int k=1;
	for(i=0;i<10;i++)
	{
		while(digit[i]!=0)
		{
		result[k]=i;
		k++;
		digit[i]--;
	}
	}
	for(i=0;i<k;i++)
	printf("%d",result[i]);
	return 0;
}
