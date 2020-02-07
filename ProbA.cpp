#include<stdio.h>
#include<string.h>


struct data
{
    char nama[10000];
};

data a[10000];
data temp;

void sort(int count)
{
    for(int i = 0 ; i < count ; i++)
    {
        for(int j = 0 ; j < count - 1 ; j++)
        {
            if(strcmp(a[j].nama,a[j+1].nama) > 0)
            {
                strcpy(temp.nama,a[j].nama);
                strcpy(a[j].nama,a[j+1].nama);
                strcpy(a[j+1].nama,temp.nama);
            }
        }
    }
}

int main()
{
    int tc,count;
    
    FILE *f = fopen("testdata.txt" , "r");
    fscanf(f,"%d",&tc); 
    for(int i = 1; i<=tc ; i++)
    {
        fscanf(f,"%d",&count); 
        for(int j = 0 ; j<count ; j++)
        {
            fscanf(f,"%s",a[j].nama);
        }
        sort(count);
        for(int k = 0; k < count ; k++)
        {
            if(k == 0)
            {
                printf("Case #%d:",i);
                printf(" %s",a[k].nama);
            }
            else
            {
                printf(" %s",a[k].nama);
            }
        }
        printf("\n");
    }
    fclose(f);
    return 0;
}



