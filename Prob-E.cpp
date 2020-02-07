#include<stdio.h>

char get_something(int i, int j, int size)
{
   // if row or column number is 0 or size -1
   if(i==0 || i==size-1 || j==0 || j==size-1)
       return '*';
   // if the the row number is half of the size and column number is even and size is odd
   if(i==(size/2) && j%2==0 && size%2!=0)
       return '*';

   // if the row numberis even and column number is half of size and size is odd
   if(i%2==0 && j==(size/2) && size%2!=0)
       return '*';

   // if row numb9er is divisible by 3 and column number is divisible by 3 and size is divisible by 10
   if(i%3==0 && j%3==0 && size%10==0)
       return '*';
   return ' ';
}

int main()
{
   int size;
   scanf("%d",&size);
   for(int i=0;i<size;i++)
   {
       for(int j=0;j<size;j++)
       {
           printf("%c",get_something(i,j,size));
       }
       puts("");
   }
}
