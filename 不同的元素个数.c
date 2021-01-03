/*不同的元素
描述:给定一个整型数组，统计不同的元素的个数。
输入:每组输入占一行，每先给出正整数n（≤30），随后是n个整数，以空格分隔。
输出:输出占一行,以回车结束。输出不同的元素的个数。*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    
    
        int n, i;
        while(scanf("%d",&n)!=EOF)//while后面不能跟分号！！！ 
        {                         //固定写法套路  没有规定写多少个 没有规定结束 
		if(n<=30)
        {int digit[100];
        for(i=0; i<n; i++)
        {
            scanf("%d",&digit[i]);
        }
        /*int j,len;
        len=n;
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(digit[j]==digit[i])
                {
                    len--;
                }
            }
        }
        printf("%d\n",len);*/
        int j,temp;
        for(i=0; i<n-1; i++)
            for(j=0; j<n-1-i; j++)
                if(digit[j]>digit[j+1])
                {
                    temp=digit[j];
                    digit[j]=digit[j+1];
                    digit[j+1]=temp;
                }
        int count=0;
        for(i=0; i<n; i++)
        {   if(digit[i]!=digit[i+1])
                count++;
				}
        printf("%d\n",count);
        memset(digit, 0, sizeof(digit));
		}
    }
    return 0;
}


 
