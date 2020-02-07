#include <stdio.h>
int betul = 0;
int getResult(char *position1,char *position2,char position1a,char position1b,int step){
 if(betul == 1){
  return 0;
 }
 if(step == 0){
  position1[0]=position1a;
  position1[1]=position1b;
  //printf("%s dibandingkan dengan %s\n",position1,position2);
  if(position1[0] == position2[0]){
   if(position1[1] == position2[1]){
    betul = 1;
    return 0;
   }
   else{
    return 0;
   }
  }
  else{
   return 0;
  }
 }
 else{
  position1[0]=position1a;
  position1[1]=position1b;
  //printf("%s dibandingkan dengan %s\n",position1,position2);
  if(position1[0] == position2[0]){
   if(position1[1] == position2[1]){
    betul = 1;
    return 0;
   }
  }
 }
 char temp = position1a;
 char temp2 = position1b;
 if(temp-1 >= 'A' && temp2+2 <= '8'){
 getResult(position1,position2,temp-1,temp2+2,step-1);
 }
 if(temp-1 >= 'A' && temp2-2 >= '1'){
 getResult(position1,position2,temp-1,temp2-2,step-1);
 }
 if(temp+1 <= 'H' && temp2-2 >= '1'){
 getResult(position1,position2,temp+1,temp2-2,step-1);
 }
 if(temp+1 <= 'H' && temp2+2 <= '8'){
 getResult(position1,position2,temp+1,temp2+2,step-1);
 }
 if(temp-2 >= 'A' && temp2+1 <= '8'){
 getResult(position1,position2,temp-2,temp2+1,step-1);
 }
 if(temp-2 >= 'A' && temp2-1 >= '1'){
 getResult(position1,position2,temp-2,temp2-1,step-1);
 }
 if(temp+2 <= 'H' && temp2+1 <= '8'){
 getResult(position1,position2,temp+2,temp2+1,step-1);
 }
 if(temp+2 <= 'H' && temp2-1 >= '1'){
 getResult(position1,position2,temp+2,temp2-1,step-1);
 }
 return 0;
}
int main(){
 int a= 0;
 scanf("%d",&a);
 getchar();
 for(int i = 0;i<a;i++){
  betul = 0;
  char temp[4]="",temp2[4]="";
  int step;
  scanf("%d",&step);
  scanf("%s %s",temp,temp2);
  getchar();
  getResult(temp,temp2,temp[0],temp[1],step);
  if(betul == 1){
   printf("Case #%d: YES\n",i+1);
  }
  else{
   printf("Case #%d: NO\n",i+1);
  }
 }
 return 0;
}
