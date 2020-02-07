#include<stdio.h>
#include<string.h>
int main(){
int ulang,ulang1;
FILE *huruf=fopen("frequency.txt","r");
fscanf(huruf,"%d\n",&ulang1);
int hitung;
for(ulang=1;ulang<=ulang1;ulang++){
	hitung=0;
	char ruf[1000000];
	printf("Case #%d:\n",ulang);
fscanf(huruf,"%[^\n]\n",&ruf);
int len=strlen(ruf),ii=0;
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0; 
for(ii=0;ii<len;ii++){
if(ruf[ii]=='A'||ruf[ii]=='a')a++;if(ruf[ii]=='B'||ruf[ii]=='b')b++;if(ruf[ii]=='C'||ruf[ii]=='c')c++;
if(ruf[ii]=='D'||ruf[ii]=='d')d++;if(ruf[ii]=='E'||ruf[ii]=='e')e++;if(ruf[ii]=='F'||ruf[ii]=='f')f++;
if(ruf[ii]=='G'||ruf[ii]=='g')g++;if(ruf[ii]=='H'||ruf[ii]=='h')h++;if(ruf[ii]=='I'||ruf[ii]=='i')i++;
if(ruf[ii]=='J'||ruf[ii]=='j')j++;if(ruf[ii]=='K'||ruf[ii]=='k')k++;if(ruf[ii]=='L'||ruf[ii]=='l')l++;
if(ruf[ii]=='M'||ruf[ii]=='m')m++;if(ruf[ii]=='N'||ruf[ii]=='n')n++;if(ruf[ii]=='O'||ruf[ii]=='o')o++;
if(ruf[ii]=='P'||ruf[ii]=='p')p++;if(ruf[ii]=='Q'||ruf[ii]=='q')q++;if(ruf[ii]=='R'||ruf[ii]=='r')r++;
if(ruf[ii]=='S'||ruf[ii]=='s')s++;if(ruf[ii]=='T'||ruf[ii]=='t')t++;if(ruf[ii]=='U'||ruf[ii]=='u')u++;
if(ruf[ii]=='V'||ruf[ii]=='v')v++;if(ruf[ii]=='W'||ruf[ii]=='w')w++;if(ruf[ii]=='X'||ruf[ii]=='x')x++;
if(ruf[ii]=='Y'||ruf[ii]=='y')y++;if(ruf[ii]=='Z'||ruf[ii]=='z')z++;
}
printf("A : %d, B : %d, C : %d, D : %d, E : %d\nF : %d, G : %d, H : %d, I : %d, J : %d\nK : %d, L : %d, M : %d, N : %d, O : %d\nP : %d, Q : %d, R : %d, S : %d, T : %d\nU : %d, V : %d, W : %d, X : %d, Y : %d\nZ : %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
printf("\n");
}
fclose(huruf);
	return 0;
}
