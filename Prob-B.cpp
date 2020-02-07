#include<stdio.h>

int main()
{
    int counter,hour,minute,second,passed;
    
    scanf("%d",&counter);
    getchar();
    for(int i=0;i<counter;i++)
    {
        scanf("%d:%d:%d",&hour,&minute,&second);
        getchar();
        scanf("%d",&passed);
        getchar();
        
      if(passed<=100000)
      {
          second = second + passed;
      }
      while(second >= 60)
      {
           second = second - 60;
          minute = minute+1;
      }
      while(minute >=60)
      {
          minute = minute -60;
          hour = hour+1;
      }
      while(hour >=24)
      {
          hour = hour-24;
      }
      
       
       printf("%02d:%02d:%02d\n",hour,minute,second);
    }
    
}
