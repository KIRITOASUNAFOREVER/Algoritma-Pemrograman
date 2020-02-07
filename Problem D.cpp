#include<stdio.h>
int main()
{
 int a, b, c, d, i, j, k, num;
 int max, max1;
 max = 0; max1 = 0;
 char s[100000];
 num=0;
 scanf("%d", &a);
 for (i=0; i<a; i++)
 {
  scanf("%d", &b);
  scanf("%s", s);
  num++;
  printf("Case #%d:", num);
  for(j=0; j<b; j++)
  {
   if (s[j]=='0')
   {
    c=0;
   }
   else
   {
    c++;
    if(c>max)
    {
     max=c;
    }
   }
  }
  for(k=0; k<b; k++)
  {
   if (s[k]=='1')
   {
    d=0;
   }
   else
   {
    d++;
    if(d>max1)
    {
     max1=d;
    }
   }
  }
  if (max>max1)
  {
   printf(" %c %d\n", '1', max);
  }
  else if (max1>max)
  {
   printf(" %c %d\n", '0', max1);
  }
  c=0; d=0; max=0; max1=0;
 }
 return 0;
}
