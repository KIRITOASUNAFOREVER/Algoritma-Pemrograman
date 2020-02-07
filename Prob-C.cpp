#include <stdio.h>
int jumlah = 1;
int firsted,aftered;
int bakteri(int first,int after,int time,int max,int n){
	int temp = n;
	int signal = 0;
//	printf("First: %d , After: %d,Waktu: %d,N = %d\n",first,after,time,n);
	if(n == 0){
		if(time % first == 0){
		//	printf("First: %d dengan %d\n",time,first);
			jumlah += 1;
			temp = 1;
			signal = 1;
			bakteri(firsted+time,aftered+firsted+time,time,max,n);
		}
	}
	else if(n == 1){
	//	printf("Masuk!\n");
		if(time % after == 0){
		//	printf("After: %d dengan %d\n",time,after);
			jumlah += 1;
			temp = 0;
			signal = 2;
			bakteri(firsted+time,aftered+firsted+time,time,max,temp);
			temp = n;
		}
	}
	if(time >= max){
		return 0;
	}
	if(signal == 2){
		bakteri(first,aftered+time,time+1,max,temp);
	}
	else{
	bakteri(first,after,time+1,max,temp);
	}
}
int main(){
	int n = 0;
	scanf("%d",&n);
	getchar();
	for(int i = 0;i<n;i++){
		jumlah = 1;
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		getchar();
		firsted = a;
		aftered = b;
		bakteri(a,b+a,1,c,0);
		printf("Case #%d: %d\n",i+1,jumlah);
	}
	return 0;
}

