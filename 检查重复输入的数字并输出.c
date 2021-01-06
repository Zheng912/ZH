#include <stdio.h>
#define true 1
#define false 0
typedef int bool; 
int main(void)
{
	bool digitseen[10] = {false};//先用布尔式全定义为false 
	int digit;
	long n;//不确定会输入什么数字 ,为long类型 
	
	printf("输入数据：");
	scanf("%ld", &n);
	while (n > 0)
	{
	   	digit = n % 10;//取余，找到个位数字 。到着检查容易实现。 
	   	if (digitseen[digit])
	   	break;
	   	digitseen[digit]=true; //记录状态，代表出现过。 
	   	n /= 10;//移到下一位数字 
	}
	if(n>0)
	 printf("重复的数字是：%ld", digit);
	else
	 printf("没有重复的数字。"); 
	 return 0;
	
 } 
