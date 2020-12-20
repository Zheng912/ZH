#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int m,i;
	scanf("%d",&m);//输入一个整数 
	char histogram[21][31];//声明一个名为柱状图的字符型数组 
	char str[20];//声明存入字母的数组 
	int num[20];//声明存入数字的数组 
	if(1<=m<=20){
		for(i=0;i<m;i++){//将数据存入数组中 
			scanf("%d",&num[i]);
			scanf("%c",&str[i]);
			}
		int shang,xia;//shang表示x轴上方的行数，xia表示x轴下方的行数 
		shang=0;
		xia=0;
		for(i=0;i<m;i++){
		
			if(num[i]>0&&shang<num[i]){
				shang=num[i];//找出上方应该有的行数 
			}
			else if(num[i]<=0&&xia>num[i]){
				xia=num[i];//找出下方应该有的行数 
			}
	     }
		
		int hang,lie;
		hang=shang-xia+1;//总的行数 
		lie=m;//总的列数 
		int j;
		for(j=0;j<lie;j++){//一列一列的看，先对列进行循环 
			if(num[j]>0){//讨论在数字大于零时的情况 
				for(i=0;i<hang;i++){//再对行进行循环 
					if(i<shang-num[j]){//x轴上方为空格的情况 
						histogram[i][j]=' ';
					}
					else if(i>=shang-num[j]&&i<shang){ 
						if(str[j]==' '||str[j]=='\n'){//数字后不带字母的情况
							histogram[i][j]='+';
						}
						else//数字后带字母的情况 
						    histogram[i][j]=str[j];
					}
					else if(i==shang)//x轴 
						histogram[i][j]='-';
					else//在x轴下方为空格的情况 
					    histogram[i][j]=' ';
				}
				
			}
			else if(num[j]<=0) {//讨论数字小于等于零时的情况 
				for(i=0;i<hang;i++){
					if(i<shang){//因数字小于零，在x轴上方都是空格 
						histogram[i][j]=' ';
					}
					else if(i==shang)//x轴 
						histogram[i][j]='-';
					else if(i>shang&&i<=shang-num[j]){
						if(str[j]==' '||str[j]=='\n'){//数字后无字母 
							histogram[i][j]='+';
						}
						else//数字后有字母 
						    histogram[i][j]=str[j];
					}
					else//在这列中的其他行是空格 
					    histogram[i][j]=' ';
				}
			}
		}
		for(i=0;i<hang;i++){//一定要仔细 之前写成i<shang就是迟迟检查不出错误 
		     if(i==shang){
		     	for(j=0;j<lie;j++)
		     	    {
					 if(j==lie-1)
			           {
					   printf("%c",histogram[i][j]);}
			        else
			           {
					   printf("%c-",histogram[i][j]);}
					}
		}
		     else
		        {
				 for(j=0;j<lie;j++)
		            {
					  printf("%c ",histogram[i][j]);}
				}
		    printf("\n");
	    }
	}
	return 0;
	
	     
	
}
