#include <stdio.h>
int main(){
 int x = 0;
 char nama[100]="";
 char nim[30]="";
 int age=0,a=0,b=0;
 double nilai = 0;
 scanf("%d",&x);
 getchar();
 for(int i = 0;i<x;i++){
  scanf("%[^\n]",nama);
  getchar();
  scanf("%[^\n]",nim);
  getchar();
  scanf("%d",&age);
  getchar();
  scanf("%d",&a);
  getchar();
  scanf("%d",&b);
  getchar();
  nilai = (double)a/(double)b;
  printf("Nama Siswa: %s\n",nama);
  printf("NIS: %s\n",nim);
  printf("Usia: %d\n",age);
  printf("Jawaban: %.2lf\n",nilai);
 }
 return 0;
}
