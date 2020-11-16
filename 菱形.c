#include<math.h>
#include<stdio.h>
int main()
{
	int x,y;
	for(y=0;y>=-6;y--)
	{
		for(x=0;x<=6;x++)
		  if(fabs(x-3)+fabs(y+3)<=3)
		    printf("*");
		  else
		     printf(" ");
		  printf("\n");
	}
	return 0;
}
