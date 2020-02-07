#include <stdio.h>

struct summ{
	int angka;
};
	summ soal[2000]; 
int main(){
	FILE *sum=fopen("SpecialSum.txt","r");
	int i,j,jum;
	i=0;
jum=0;
while(fscanf(sum,"%d ",&soal[i].angka)!=EOF){
	for(j=1;j<=1000;j++){
		if(soal[i].angka==j*j){
			soal[i].angka*=-1;
			break;
		}
	}
	jum=jum+soal[i].angka;
	i++;
}
//int a;
printf("Special sum of %d datas is %d.\n",i,jum);
//for(a=0;a<i;a++){
//	printf("%d ",soal[a].angka);
//}
fclose(sum);
	return 0;
}
