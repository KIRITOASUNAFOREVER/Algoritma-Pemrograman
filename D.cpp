#include<stdio.h>

int main(){
	int ulang,ulang1;
	scanf("%d",&ulang1);
	for(ulang=1;ulang<=ulang1;ulang++){
		int arr,i,kanan,kiri,kasu=0,kadu=0,katig=0,kapat=0,check=0;
		scanf("%d",&arr);
		getchar();
		for(i=0;i<arr;i++){
			scanf("%d %d",&kiri,&kanan);
			getchar();
			if(kiri>0&&kanan>0){
				kasu++;
			}else{
			if(kiri<0&&kanan>0){
				kadu++;
			}else{
				if(kiri<0&&kanan<0){
					katig++;
				}else{
					if(kiri>0&&kanan<0){
						kapat++;
					}
				}
			}
			}
		}
					if(kasu>=2){
				if(kasu<=kadu||kasu<=katig||kasu<=kapat){
					check=1;
				//	break;
				}
			}
						if(kadu>=2){
				if(kadu<=kasu||kadu<=katig||kadu<=kapat){
					check=1;
				//	break;
				}
			}
						if(katig>=2){
				if(katig<=kasu||katig<=kadu||katig<=kapat){
					check=1;
				//	break;
				}
			}
						if(kapat>=2){
				if(kapat<=kasu||kapat<=kadu||kapat<=katig){
					check=1;
				//	break;
				}
			}
		if(check==0){
			printf("Case #%d: YES\n",ulang);
		}
		if(check==1){
			printf("Case #%d: NO\n",ulang);
		}
	}
	return 0;
}
