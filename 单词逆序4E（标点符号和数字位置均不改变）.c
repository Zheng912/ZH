#include <stdio.h>
#include <string.h>

int isa(char ch)
{
  if( (ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z'))
  return 1;
  else
  return 0;
}
int main(void)
{
   
   char str[100];
   char a[100];
   int i=0,j=0,len=0;
   int k=0,c=0,d=0;
   char temp;
   gets(a);
   len=strlen(a);

   for(i=0;i<len;i++)
    {

      str[i]=a[i];
      if(isa(a[i])==1)
      {
         k++;
      }
      if( (isa(a[i+1])==0)&&k>0  )
      {      c=i;
             d=k;

        for( j=0;j<(k/2);j++)
          {  temp=str[c];
             str[c]=str[c-d+1] ;
             str[c-d+1]=temp;
             c--;
             d=d-2;
           }
           k=0;
      }
    }
     for(i=0;i<len;i++)
    printf("%c",str[i]);
    getch();
   }
