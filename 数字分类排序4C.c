#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(int a[],int n)//从小到大排序 
{
  int i,j,t;
  for(i=0;i<n-1;i++)
   for(j=0;j<n-1-i;j++)
     if(a[j]>a[j+1])
       {t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
}
int main(void)
{
	int i,n;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		int k,x,m;
		m=0;
		int a[20]={0};
		int b[20]={0};
        int d;
		int cnt=0;
		while(1)
		{
		scanf("%d",&x);
		int d=getchar();
		a[cnt]=x;
		cnt++;
		if(d=='\n')
        break;}
		//输入数组元素
		for(k=0;k<cnt;k++)
		{
			if((a[k]%2)!=0)//判断数组中的元素是否为奇数 
			{
				b[m]=a[k];
				m++;//将原数组中的奇数赋值到另一个数组中 
			}
		}
		int q;
		sort(b,m);
		for(q=0;q<m;q++)
		printf("%d ",b[q]);
		int p,e;
		e=0;
		int c[20];
		for(p=0;p<cnt;p++)
		{
			if(a[p]%2==0)//判断数组中的元素是否为偶数 
			{
				c[e]=a[p];
				e++;//将原数组的偶数赋值到另一个数组中 
			}
		}
		int t;
		sort(c,e);
		for(t=0;t<e-1;t++)
		printf("%d ",c[t]);
		printf("%d\n",c[e-1]);//最后加了个换行符就满分。。真是难搞的oj 
		}
		return 0;
}
