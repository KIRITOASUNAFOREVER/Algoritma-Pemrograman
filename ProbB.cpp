#include<stdio.h>
#include<string.h>
struct mahasiswa
{
	char nama[105];
};
mahasiswa mhs[10005];
mahasiswa temp[1];

int search(int n,int count,int *flag){
	for(int i=0;i<n;i++){
	if(strcmp(temp[0].nama,mhs[i].nama)==0){
	count++;
	*flag=i;
	}
}
	return count;
}

int main(){
	int n,m,count=0,hasil,flag=0;
	FILE *fp = fopen("testdata.in","r");
	fscanf(fp,"%d %d",&n,&m);
	for(int i=0;i<n;i++){
		if(i==n-1){
		fscanf(fp,"%s\n",mhs[i].nama);
		}else{
		fscanf(fp,"%s ",mhs[i].nama);
		}
	}
	for(int j=1;j<=m;j++){
		count=0;
		fscanf(fp,"%s\n",temp[0].nama);
		hasil = search(n,count,&flag);
		printf("Position #%d:",j);
		if(hasil==1){
			printf(" %d",flag+1);
		}else if(hasil>=2){
			printf(" Jojo is confused");
		}else if(hasil==0){
			printf(" Jojo is forever alone");
		}
		printf("\n");
	}
	fclose(fp);
}
