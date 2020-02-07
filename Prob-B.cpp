#include <stdio.h>
int main(){
 int a = 0;
 scanf("%d",&a); 
 getchar();
 char nama;
 int convert = 0;
 int b = 0;
 int temp = -1;
 for(int i = 0;i<a;i++){
  temp = -1;
  scanf("%c %d",&nama,&b);
  getchar();
  convert = nama-'a'+1;
  if(temp < 8-b){
   temp = 8-b;
  }
  if(temp < b-1){
   temp = b-1;
  }
  if(temp < 8-convert){
   temp = 8-convert;
  }
  if(temp < convert-1){
   temp = convert-1;
  }
  printf("Case #%d: %d\n",i+1,temp);
 }
 return 0;
}
