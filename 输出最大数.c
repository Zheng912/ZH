#include <stdio.h>
int main(void)
{
	float i, max;
	
	printf("若想停止输入数据并输出比较结果，输入0或负数即可。\n请输入一个数：");
	scanf("%f", &i);
	
	while(i > 0) {
		printf("请输入一个数: ");
		scanf("%f", &i); 
		if (i > max){
			max = i;
			}
		if (i <= 0)
		   break;
	}
	printf("最大的数是：%f", max);
	return 0;
 } 
