#include<stdio.h>
int main(){
    void Matrix_multiplication(int n,int a[30][30],int b[30][30],int c[30][30]);
    int a[30][30]={0},b[30][30]={0},c[30][30]={0},n,m,i=0,j=0,k=0;
   
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
    if(m>0){
        for(i=0;i<m-1;i++){
        
               Matrix_multiplication(n,a,b,c);
        
                 for(j=0;j<n;j++){
                    for(k=0;k<n;k++){
                        b[j][k]=c[j][k];
                        c[j][k]=0;
                    }
                }
        }
        for(i=0;i<n;i++){
              for(j=0;j<n;j++){
                 printf("%d ",b[i][j]);
             }
              printf("\n");
         }
    }
    else{
        for(i=0;i<n;i++){
             for(j=0;j<n;j++){
                 if(i==j)printf("1 ");
                 else printf("0 ");
             }
             printf("\n");
         }
    }
    return 0;
 }
   
void Matrix_multiplication(int n,int a[30][30],int b[30][30],int c[30][30]){
    int i=0,j=0,k=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                     c[i][j]+=a[i][k]*b[k][j];
                 }
            }
        }
}

