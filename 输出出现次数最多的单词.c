#include <stdio.h>
#include <string.h>
struct wordsnumber
{
   char word[20]; //假设每个单词的字母数不超过20
   int count;
} wordsnumber[1000]; //声明结构体类型和定义结构体变量,每个wordsnumber里包含一个各个单词的数组并记录这个单词的个数。
int main(void)
{
   char words[1000], c;
   memset(words, 0, sizeof(words));
   int i, len;
   for (i = 0; (c = getchar()) != EOF; i++)
   {
      words[i] = c;
      len = i;
   }
   for (i = 0; i <= len; i++)
   {
      if (words[i] >= 'A' && words[i] <= 'Z')
      {
         words[i] = words[i] + 32;
      }
      else if (words[i] >= 'a' && words[i] <= 'z')
      {
         words[i] = words[i];
      }
      else
         words[i] = ' ';
   } //将文本转化为只含有小写字母和空格的数组
   for (i = 0; i < len; i++)
   {
      if (words[i] == ' ' && words[i + 1] == ' ')
      {
         int j;
         for (j = i; j < len; j++)
         {
            words[j] = words[j + 1];
         }
         words[len] = '\0';
         len--;
         i--;
      }
   } //删除多余的空格 使单词与单词之间只保留一个空格
   words[len] = '\0';
   len--;
   int k = 0, n = 0, j;
   for (i = 0; i < 1000; i++)
   {
      if (words[k] == '\0')
      {
         n = i;
         break;
      }
      for (j = 0; j < 20; j++)
      {
         wordsnumber[i].word[j] = words[k];
         k++;
         n = i;
         if (words[k] == ' ')
         {
            k++;
            break;
         }
      }

   } //将每个单词单独存进各自数组中。
   int m;
   for (m = 0; m < n; m++)
   {
      wordsnumber[m].count = 0;
   } //初始化 存入数组中每个单词数量初始都为1
   int t, p;
   for (t = 0; t < n; t++)
   {
      for (p = 0; p < n; p++)
      {
         if (strcmp(wordsnumber[t].word, wordsnumber[p].word) == 0)
         {
            wordsnumber[p].count++;
         }
      }
   } //计算单词的个数，若遇到相同单词则个数加一

   int maxx = -1;
   int maxn = 0;
   for (i = 0; i < n; i++)
   {
      if (wordsnumber[i].count > maxx)
      {
         maxx = wordsnumber[i].count;
         maxn = i;
      }
      else if (wordsnumber[i].count == maxx && strcmp(wordsnumber[maxn].word, wordsnumber[i].word) < 0)
      {
         maxn = i;
      }
   }

      printf("%s %d\n", wordsnumber[maxn].word, wordsnumber[maxn].count);
   return 0;
}
