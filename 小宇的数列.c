#include <stdio.h>
int main(void)
{
	int a, b, c, d, e, f, g, h, i, j;
	int n;
	
	while (scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF)
	{
		if(a==0&&b==0&&c==0&&d==0&&e==0)
		{
			break;
		}
	if (b-a==c-b&&c-b==d-c&&d-c==e-d)
	  {
	  	n = b - a;
	    f = e + n;
	    g = f + n;
	    h = g + n;
	    i = h + n;
	    j = i + n;
	  printf("case one\n");
	  printf("%d %d %d %d %d\n", f, g, h, i, j);
	  }
      
	 if (b*b==a*c&&c*c==b*d&&d*d==c*e)
	  {
	  	
	  	f = (e * e)/d;
	  	g = (f * f)/e;
	  	h = (g * g)/f;
	  	i = (h * h)/g;
	  	j = (i * i)/h;
	  printf("case two\n");
	  printf("%d %d %d %d %d\n", f, g, h, i, j);
	   }
	  
	 if (c==a+b&&d==b+c&&e==c+d)
	  {
	  	f = d + e;
	  	g = e + f;
	  	h = f + g;
	  	i = g + h;
	  	j = h + i;
	  printf("case three\n");
	  printf("%d %d %d %d %d\n", f, g, h, i, j);
	  }
	  
    }
	   return 0;
} 
