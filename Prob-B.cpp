#include <stdio.h>
int main(){
	long long int arr[100030]={0};
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 2;
	int n = 0;
	int index = 0;
	int flag = 0;
	long long int total = 0;
	for(int i = 4;i<=100000;i++){
		total = 0;
		//printf("Print!\n");
		for(int j = i;j>i-3;j--){
			total += (arr[j-1] % 1000000007);
			total %= 1000000007;
		}
		arr[i] = total;
	}
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&index);
		printf("Case #%d: %lld\n",i+1,arr[index]%1000000007);
	}
	return 0;
}

