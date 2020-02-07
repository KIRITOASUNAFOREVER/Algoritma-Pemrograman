#include<stdio.h>
int main()
{
 int counter;
 scanf("%d",&counter);
 for(int a=0;a<counter;a++)
 {
  int besar,key1;
  scanf("%d",&key1);
  printf("Case #%d:\n",a+1);
  besar=2;
  while(key1>1)
  {
   key1=key1-2;
   besar=besar+1;
  }
  for(int x=0;x<besar;x++)
  {
   for(int y=x;y<besar;y++)
   {
    printf("#");
   }
   for(int u=x;u>0;u--)
   {
    printf(" ");
   }
   for(int u=1;u<x;u++)
   {
    printf(" ");
   }
   for(int u=besar;u>x;u--)
   {
    if(x==0&&u==besar)
    { 
     
    }
    else
    {
     printf("#");
    }
   }
   printf("\n");
  }
  for(int x=0;x<besar-1;x++)
  {
   for(int y=0;y<x+2;y++)
   {
    printf("#");
   }
   for(int u=besar;u>x+2;u--)
   {
    printf(" ");
   }
   for(int u=besar;u>x+3;u--)
   {
    printf(" ");
   }
   for(int u=0;u<x+2;u++)
   {
    if(u==x+1&&x==besar-2)
    {
     
    }
    else
    {
    printf("#");  
    }
   
   }
   printf("\n");
  }
 }
}
