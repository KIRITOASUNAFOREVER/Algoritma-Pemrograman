#include<stdio.h>
 
int main (){
    int i,j,b,counter;
   
    scanf("%d",&b);  
    for (i = 0; i < b; i++) {
        scanf("%d",&counter);
        printf("Case #%d:\n",i+1);
        for(j=counter;j>0;j--){
            if(j==5|| j==10 || j==30 || j==60|| j==counter){
                printf("%d SECONDS TILL NEW YEAR!!\n",j);
            }
            else{
                printf("%d\n",j);
            }
        }
    }
    return 0;
}
