#include<stdio.h>

// Probably FIXED
int getFastestStep_toto(unsigned long long int numbermap[],unsigned long long int position, unsigned long long int counterstep,unsigned long long int destination)
{
if(position == destination)
{
return counterstep;
}

if(position > destination)
{
return 999999;
}
int step = getFastestStep_toto(numbermap,position+1,counterstep+1,destination);
int tmp = getFastestStep_toto(numbermap,position+numbermap[position],counterstep+1,destination);

return (step > tmp) ? tmp : step;
}

//int getFastestStep(unsigned long long int numbermap[],unsigned long long int position, unsigned long long int counterstep,unsigned long long int destination)
//{
//	if(numbermap[position]==destination-(position+1))
//	{
//	return counterstep+1;
//	}
//	else if(numbermap[position] > destination-(position+1) && numbermap[position]!=0)
//	{
//	return getFastestStep(numbermap,position+1,counterstep+1,destination);
//	}
//	else if(numbermap[position] < destination-(position+1) && numbermap[position]!=0)
//	{
//	return getFastestStep(numbermap,position+numbermap[position],counterstep+1,destination);
//	}
//	else if(numbermap[position]==0)
//	{
//	return counterstep;
//	}
//}

int main()
{
int t=0;
unsigned long long int numbermap[25];
unsigned long long int position;
unsigned long long int destination;
unsigned long long int counterstep;
unsigned long long int num;

scanf("%d",&t);

for (int i = 0; i < t; i++) 
{
position=0;

scanf("%llu",&num);
for(int a=0; a < 21; a++) 
{
numbermap[a] = 0;
}
for(int j = 0; j < num; j++) 
{
scanf("%llu",&numbermap[j]);
}
printf("Case #%d: %llu\n",i+1,getFastestStep_toto(numbermap,0,0,num));
}	
}
