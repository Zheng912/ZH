#include <stdio.h>
 int c(int a[200],int b[200],int n,int len)//a[]为输入数据后存入的数，b[]表示走过数据后的标记，n表示走过的数据长度，len表示总共的数据长度 
 {
     int k;
	 if(n==len)//递归，当走过的长度等于数据总长度时先输出结果 
	 {
	 	printf("--> ");
	 	for(k=0;k<len;k++)
	 	 if(b[k]==1)//表示走过 
		  printf("%d ",a[k]);
		  printf("\n");
		return;//有返回值，表示结束 
		 }	
	
	 b[n]=1;//标记走过的为1 
	 c(a,b,n+1,len);//再返回去调用原来的函数 
	 b[n]=0;
	 c(a,b,n+1,len);
	}
int main()
{
	int a[200],b[200],i,len;
	scanf("%d",&len);//数字，不是字符型，不用%s而用%d。 
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);//注意写法 
	}
	c(a,b,0,len);
}
