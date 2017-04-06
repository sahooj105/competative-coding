#include <stdio.h>
#define MAX 100000
int main()
{
	int i,j,result,Testcase,NumberOfMonths,x[MAX];
	int fine=0,amount=0;
	scanf("%d",&Testcase);
	for (j = 0; j < Testcase; ++j)
	{
		scanf("%d",&NumberOfMonths);
		for (i = 0; i < NumberOfMonths; ++i)
		{
			scanf("%d",&x[i]);
		}
		for (i = 0; i < NumberOfMonths; ++i)
		{
			if(x[i]==0)
			{
				fine=fine+100;
				amount=amount+1000;
			}
			//if(x[i]==1 && fine=(i+1)*100 && i>0 && x[i-1]!=1)
				//if(x[i]==1 && fine==(i*100) && i>0 )
			if(x[i]==1 && amount>0 && i>0 )
			{
				amount=amount;
				fine=fine+100;
			}
		}
		result=amount+fine;
		printf("%d\n",result );
		fine=0,amount=0;
	}
	return 0;
}
