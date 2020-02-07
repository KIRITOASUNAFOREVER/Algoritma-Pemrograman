#include<stdio.h>
#include<string.h>

int main()
{
    char nama[1005];
    int counter;
    
    scanf("%d",&counter);
    getchar();
    for(int i=0;i<counter;i++)
    {
        scanf("%[^\n]",nama);
        getchar();
        
        for(int j=0;j<strlen(nama);j++)
        {
            if(nama[j]=='f' || nama[j]=='F')
            {
                break;
            }
            printf("%c",nama[j]);
        }
        printf("\n");          
    }
}
