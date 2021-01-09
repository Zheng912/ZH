#include <stdio.h>
#define SIZE 4
int main(void) 
{
	int data[SIZE][SIZE],i,j,d;
	for(i=0;i<SIZE;i++)
	  for(j=0;j<SIZE;j++)
	      scanf("%d",&data[i][j]);
	for(i=1;i<SIZE;i++)
	  for(j=1;j<=1;j++)
	   {
	   	  d=data[i][i-j];
	   	  data[i][i-j]=data[i-j][i];
	   	  data[i-j][i]=d;
	   }
	   for(i=0;i<SIZE;i++)
	   {
	   	printf("\n");
	   	for(j=0;j<SIZE;j++)
	   	{
	   		printf("%4d",data[i][j]);
		   }
	   }
}
