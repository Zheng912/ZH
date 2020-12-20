#include <stdio.h>
int main(void)
{
	int d, n;
	printf("请输入一个数字：");
	scanf("%d", &n);
	
	for(d=2; d<n; d++){
	  if (n % d == 0)//从2开始往上除 
	  break;
}
    if (d < n)
	printf("%d能被%d整除", n, d);
	else 
	printf("%d是素数", n); 
	
	return 0;
	  
}
