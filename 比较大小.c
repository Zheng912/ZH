#include <stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
			if(a>b&&b>c&&c>d)
			   printf("%d %d %d %d\n",d,c,b,a);
			else if(a>b&&b>d&&d>c)
			   printf("%d %d %d %d\n",c,d,b,a);
			else if(a>c&&c>b&&b>d)
			   printf("%d %d %d %d\n",d,b,c,a);
			else if(a>c&&c>d&&d>b)
			   printf("%d %d %d %d\n",b,d,c,a);
			else if(a>d&&d>b&&b>c)
			   printf("%d %d %d %d\n",c,b,d,a);
			else if(a>d&&d>c&&c>b)
			   printf("%d %d %d %d\n",b,c,d,a);
			else if(d>c&&c>a&&a>b)
			   printf("%d %d %d %d\n",b,a,c,d);
			else if(b>a&&a>c&&c>d)
			   printf("%d %d %d %d\n",d,c,a,b);
			else if(b>a&&a>d&&d>c)
			   printf("%d %d %d %d\n",c,d,a,b);
			else if(b>c&&c>a&&a>d)
			   printf("%d %d %d %d\n",d,a,c,b);
			else if(b>c&&c>d&&d>a)
			   printf("%d %d %d %d\n",a,d,c,b);
			else if(b>d&&d>a&&a>c)
			   printf("%d %d %d %d\n",c,a,d,b);
			else if(b>d&&d>c&&c>a)
			   printf("%d %d %d %d\n",a,c,d,b);
			else if(c>a&&a>b&&b>d)
			   printf("%d %d %d %d\n",d,b,a,c);
			else if(c>a&&a>d&&d>b)
			   printf("%d %d %d %d\n",b,d,a,c);
			else if(c>b&&b>a&&a>d)
			   printf("%d %d %d %d\n",d,a,b,c);
			else if(c>b&&b>d&&d>a)
			   printf("%d %d %d %d\n",a,d,b,c);
			else if(c>d&&d>b&&b>a)
			   printf("%d %d %d %d\n",a,b,d,c);
			else if(c>d&&d>a&&a>b)
			   printf("%d %d %d %d\n",b,a,d,c);
			else if(d>a&&a>b&&b>c)
			   printf("%d %d %d %d\n",c,b,a,d);
			else if(d>a&&a>c&&c>b)
			   printf("%d %d %d %d\n",b,c,a,d);
			else if(d>b&&b>a&&a>c)
			   printf("%d %d %d %d\n",c,a,b,d);
			else if(d>b&&b>c&&c>a)
			   printf("%d %d %d %d\n",a,c,b,d);
			else if(d>c&&c>b&&b>a)
			   printf("%d %d %d %d\n",a,b,c,d);
			
		
		else if(a==b==c==d)
		printf("%d %d %d %d\n",a,b,c,d);
		else if(a==b==c&&a!=d)
		{
			if(a>d)
			   printf("%d %d %d %d\n",d,a,b,c);
			else
			   printf("%d %d %d %d\n",a,b,c,d);
		}
		else if(a==c==d&&a!=b)
		{
			if(a>b)
			   printf("%d %d %d %d\n",b,a,d,c);
			else
			   printf("%d %d %d %d\n",a,d,c,b);
		}
		else if(b==c==d&&b!=a)
		{
			if(b>a)
			   printf("%d %d %d %d\n",a,d,b,c);
			else
			   printf("%d %d %d %d\n",d,b,c,a);
		}
		else if(a==b==d&&a!=c)
		{
			if(a>c)
			   printf("%d %d %d %d\n",c,a,b,d);
			else
			   printf("%d %d %d %d\n",a,b,d,c);
		}
		else if(a==b&&c==d)
		{
			if(a>c)
			printf("%d %d %d %d\n",c,d,a,b);
			else 
			printf("%d %d %d %d\n",a,b,c,d);
		}
		else if(a==c&&b==d)
		{
			if(a>b)
			printf("%d %d %d %d\n",b,d,a,c);
			else 
			printf("%d %d %d %d\n",a,c,b,d);
		}
		else if(a==d&&c==b)
		{
			if(a>c)
			printf("%d %d %d %d\n",c,b,a,d);
			else 
			printf("%d %d %d %d\n",a,d,c,b);
		}
		else if(a==b&&a!=c&&a!=d&&c!=d)
		{
			if(a>c&&c>d)
			   printf("%d %d %d %d\n",d,c,a,b);
			else if(a>d&&d>c)
			   printf("%d %d %d %d\n",c,d,a,d);
			else if(d>a&&a>c)
			   printf("%d %d %d %d",c,a,b,d);
			else if(d>c&&c>a)
			   printf("%d %d %d %d",a,b,c,d);
			else if(c>d&&d>a)
			   printf("%d %d %d %d",a,b,d,c);
			else if(c>a&&a>d)
			   printf("%d %d %d %d",d,a,b,c);
		}
		else if(a==c&&a!=b&&a!=d&&b!=d)
		{
			if(a>b&&b>d)
			   printf("%d %d %d %d",d,b,a,c);
			else if(a>d&&d>b)
			   printf("%d %d %d %d",b,d,a,c);
			else if(d>a&&a>b)
			   printf("%d %d %d %d",b,a,c,d);
			else if(d>b&&b>a)
			   printf("%d %d %d %d",a,c,b,d);
			else if(b>d&&d>a)
			   printf("%d %d %d %d",a,c,d,b);
			else if(b>a&&a>d)
			   printf("%d %d %d %d",d,a,c,b);
		}
		else if(a==d&&a!=b&&a!=c&&b!=c)
		{
			if(a>c&&c>b)
			   printf("%d %d %d %d",b,c,a,d);
			else if(a>b&&b>c)
			   printf("%d %d %d %d",c,b,a,d);
			else if(b>a&&a>c)
			   printf("%d %d %d %d",c,a,d,b);
			else if(b>c&&c>a)
			   printf("%d %d %d %d",a,d,c,b);
			else if(c>b&&b>a)
			   printf("%d %d %d %d",a,d,b,c);
			else if(c>a&&a>b)
			   printf("%d %d %d %d",b,a,d,c);
		}
		else if(c==d&&c!=a&&c!=b&&a!=b)
		{
			if(a>c&&c>b)
			   printf("%d %d %d %d",b,c,d,a);
			else if(a>b&&b>c)
			   printf("%d %d %d %d",c,d,b,a);
			else if(b>a&&a>c)
			   printf("%d %d %d %d",c,d,a,b);
			else if(b>c&&c>a)
			   printf("%d %d %d %d",a,c,d,b);
			else if(c>b&&b>a)
			   printf("%d %d %d %d",a,b,c,d);
			else if(c>a&&a>b)
			   printf("%d %d %d %d",b,a,c,d);
		}
		else if(b==d&&b!=c&&b!=a&&a!=c)
		{
			if(a>c&&c>b)
			   printf("%d %d %d %d",b,d,c,a);
			else if(a>b&&b>c)
			   printf("%d %d %d %d",c,d,b,a);
			else if(b>a&&a>c)
			   printf("%d %d %d %d",c,a,d,b);
			else if(b>c&&c>a)
			   printf("%d %d %d %d",a,c,d,b);
			else if(c>b&&b>a)
			   printf("%d %d %d %d",a,b,d,c);
			else if(c>a&&a>b)
			   printf("%d %d %d %d",b,d,a,c);
		}
		else if(b==c&&b!=a&&b!=d&&a!=d)
		{
			if(a>c&&c>d)
			   printf("%d %d %d %d",d,c,b,a);
			else if(a>d&&d>c)
			   printf("%d %d %d %d",c,b,d,a);
			else if(d>a&&a>c)
			   printf("%d %d %d %d",c,b,a,d);
			else if(d>c&&c>a)
			   printf("%d %d %d %d",a,c,b,d);
			else if(c>d&&d>a)
			   printf("%d %d %d %d",a,d,c,b);
			else if(c>a&&a>d)
			   printf("%d %d %d %d",d,a,c,b);
		}
	}
	return 0;
}
