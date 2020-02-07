#include <stdio.h>

int main()
{
  long long int m, n, p, q, sum = 0,counter,a=0;
  long long int first[55][55], second[55][55], multiply[55][55];
 
   
    scanf("%lld",&counter);
    getchar();
    
    for(int i=0;i<counter;i++)
    {
         
  scanf("%lld %lld", &m, &n);
  
 
  for (int c = 0; c < m; c++)
    for (int d = 0; d < n; d++)
      scanf("%lld", &first[c][d]);
 
  scanf("%lld %lld", &p, &q);
    for (int c = 0; c < p; c++)
      for (int d = 0; d < q; d++)
        scanf("%lld", &second[c][d]);
 
    for (int c = 0; c < m; c++) {
      for (int d = 0; d < q; d++) {
        for (int k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Case #%lld:\n",a+1);
    a++;
 
    for (int c = 0; c < m; c++) {
      for (int d = 0; d < q; d++){
   
          printf("%lld",multiply[c][d]); 
          if(d<q-1)
          {
           printf(" ");
    }    
    
 }
      printf("\n");
    }
  
    }
 
 
  return 0;
}
