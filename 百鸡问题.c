/*百鸡问题：鸡翁一，钱值五；母鸡一，钱值三；鸡雏三，钱值一。何以百钱买百鸡？*/ 
#include <stdio.h>
int main(void)
{
    int x,y,z;//xyz代表公鸡、母鸡、鸡仔的个数 
    for(x=0;x<20;x++)//公鸡最多买100个
	   for(y=0;y<33;y++)//母鸡最多买33个 
	     {
	     	z=100-x-y;
	     	if(x*5+y*3+z/3==100)
			 printf("%d %d %d\n",x,y,z);
		  } 
		 
	return 0;
}
