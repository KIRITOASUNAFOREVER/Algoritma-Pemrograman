#include <stdio.h>
int main(){
	int a= 0;
	int b = 0;
	scanf("%d",&a);
	int temp = 0;
	int count = 0;
	int temp2 = 1;
	for(int z = 0;z<a;z++){
		scanf("%d",&b);
		printf("Case #%d:\n",z+1);
		temp = b/2;
		temp2 = temp + 1;
		for(int i = 0;i<=temp2;i++){
			for(int j = 0;j<=temp2;j++){
				if(j <= temp2-i){
					printf("#");
				}
				else{
					printf("");
				}
			}	
			if(i != 0){
				for(int u = 0;u<(i*2)-1;u++){
					printf(" ");
				}
			}
			for(int j = 0;j<temp2;j++){
				if(j <= temp2-i){
					printf("#");
				}
				else{
					printf("");
				}
			}
			printf("\n");
		}
		for(int i = temp2-1;i>=0;i--){
			for(int j = 0;j<=temp2;j++){
				if(j <= temp2-i){
					printf("#");
				}
				else{
					printf("");
				}
			}	
			if(i != 0){
				for(int u = 0;u<(i*2)-1;u++){
					printf(" ");
				}
			}
			for(int j = 0;j<temp2;j++){
				if(j <= temp2-i){
					printf("#");
				}
				else{
					printf("");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
