#include <stdio.h>
const int s=83;
const int titik = 46;
const int tambah= 43;
const int pagar = 35;
const int kali=88;
int cek[105][105];
int recursive(char map[105][105],int posx,int posy,int direction,int batasbawah,int bataskanan){
 if(direction == 1){ //bawah
  if(posy+1 < batasbawah){
   if(map[posy+1][posx]== pagar){
    return 0;
   }
   else if(map[posy+1][posx] == titik || map[posy+1][posx]== s){
    recursive(map,posx,posy+1,direction,batasbawah,bataskanan);
   }
   else if(map[posy+1][posx] == kali){
    map[posy+1][posx]='*';
    return 1;
   }
   else if(map[posy+1][posx] == tambah && cek[posy+1][posx]<=4){
   // map[posy+1][posx]='*';
    cek[posy+1][posx]+=1;
    return recursive(map,posx,posy+1,1,batasbawah,bataskanan)+recursive(map,posx,posy+1,2,batasbawah,bataskanan)+recursive(map,posx,posy+1,3,batasbawah,bataskanan);
   }
   else return 0;
  }
  else{
   return 0;
  }
 }
 else if(direction == 2){ //left
  if(posx-1 >= 0){
   if(map[posy][posx-1] == pagar){
    return 0;
   }
   else if(map[posy][posx-1] == titik || map[posy][posx-1]== s){
    recursive(map,posx-1,posy,direction,batasbawah,bataskanan);
   }
   else if(map[posy][posx-1] == kali){
    map[posy][posx-1]='*';
    return 1;
   }
   else if(map[posy][posx-1] == tambah && cek[posy][posx-1]<=4){
   // map[posy][posx-1]='*';
    cek[posy][posx-1]+=1;
    return recursive(map,posx-1,posy,2,batasbawah,bataskanan)+recursive(map,posx-1,posy,1,batasbawah,bataskanan)+recursive(map,posx-1,posy,4,batasbawah,bataskanan);
   }
   else return 0;
  }
  else{
   return 0;
  }
 }
 else if(direction == 3){ //right
  if(posx+1 < bataskanan){
   if(map[posy][posx+1]== pagar){
    return 0;
   }
   else if(map[posy][posx+1] == titik || map[posy][posx+1]== 'S') {
    recursive(map,posx+1,posy,direction,batasbawah,bataskanan);
   }
   else if(map[posy][posx+1] == kali){
    map[posy][posx+1]='*';
    return 1;
   }
   else if(map[posy][posx+1] == tambah && cek[posy][posx+1]<=4){
    cek[posy][posx+1]+=1;
   // map[posy][posx+1]='*';
    return recursive(map,posx+1,posy,3,batasbawah,bataskanan)+recursive(map,posx+1,posy,1,batasbawah,bataskanan)+recursive(map,posx+1,posy,4,batasbawah,bataskanan);
   }
   else return 0;
  }
  else{
   return 0;
  }
 }
 else if(direction == 4){ //up
  if(posy-1 >= 0){
   if(map[posy-1][posx]== pagar){
    return 0;
   }
   else if(map[posy-1][posx] == titik || map[posy-1][posx]== s) {
    recursive(map,posx,posy-1,4,batasbawah,bataskanan);
   }
   else if(map[posy-1][posx] == kali){
    map[posy-1][posx]='*';
    return 1;
   }
   else if(map[posy-1][posx] == tambah && cek[posy-1][posx]<=4){
   // map[posy-1][posx]='*';
    cek[posy-1][posx]+=1;
    return recursive(map,posx,posy-1,4,batasbawah,bataskanan)+recursive(map,posx,posy-1,2,batasbawah,bataskanan)+recursive(map,posx,posy-1,3,batasbawah,bataskanan);
   }
   else return 0;
  }
  else{
   return 0;
  }
 }else return 0;
}
int main(){
// printf("S:%d '.':%d '+':%d '#':%d 'X':%d\n",'S','.','+','#','X');
//printf("%c %c %c %c %c\n",s,titik,tambah,pagar,kali);
 int x;
 int a,b,direct=0;
 int posx,posy;
 long long int m;
 char map[105][105];
// int cek[105][105];
 scanf("%d",&x);getchar();
 for(int i = 1;i<=x;i++){
  direct=posx=posy=m=0;
  char perintah[10];
  scanf("%d %d",&a,&b);getchar();
  for(int j=0;j<a;j++){
   for(int k=0;k<b;k++){
    scanf("%c",&map[j][k]);
    if(map[j][k]==s){
     posy = j;
     posx = k; 
    }cek[j][k]=0;
   }
   getchar();
  }
  map[posy][posx]='.';
  scanf("%s",perintah);getchar();
  if(perintah[0]=='D'){
   direct = 1;
  }
  else if(perintah[0] == 'L'){
   direct = 2;
  }
  else if(perintah[0] == 'R'){
   direct = 3;
  }
  else if(perintah[0]=='U'){
   direct = 4;
  }
  m=recursive(map,posx,posy,direct,a,b);
  printf("Case #%d: %lld\n",i,m);
 }
 return 0;
}
