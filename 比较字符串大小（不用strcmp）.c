#include<stdio.h>
int mycmp(const  char *a, const  char *b)
{
    while(*a==*b && *a)
    {
        a++;
        b++;
    }
    return *a -*b;
}
int main()
{
    char a[]="ddd",b[]="ddd";
    printf("%d",mycmp(a,b));
    return 0; 
}
