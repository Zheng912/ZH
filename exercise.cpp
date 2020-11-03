#include <stdio.h>

int main(void)
{
	int i, j, result;
	
	printf("Enter the number: ");
	scanf("%d%d", &i, &j);
	
	if (i>j)
	  result = i;
	else
	  result = j;
	  
	printf("The number is: %d\n", result);
	
	return 0;	
	
 } 
