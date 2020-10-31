//Addition and simplification of fractions

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom, j, k, i;
	
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);
	
	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);
	
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	j=result_num;
	k=result_denom;
	do
	{
		i = result_denom % result_num;
		
		if(i != 0)
		{
			result_num = result_denom;
			result_num = i;
		}
		else
		    break;
	}
	while(i != 0);
	j = j / result_num;
	k = k / result_num;
	if(k != 1)
	printf("%d/%d",j,k);
	else
	printf("%d",j);
	return 0;
 } 
