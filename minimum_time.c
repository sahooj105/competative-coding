#include <stdio.h>
#define MAX 20000
int main()
{
	int i,j,result,Testcase,NumberOfTask,x[MAX],y[MAX];
	int xFirst=0,yFirst=0;
	scanf("%d",&Testcase);
	for (int k = 0; k < Testcase; ++k)
	{

	scanf("%d",&NumberOfTask);

	for(i=0;i<NumberOfTask;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=0;j<NumberOfTask;j++)
	{
		scanf("%d",&y[j]);
	}
	x[NumberOfTask]=0;
	y[NumberOfTask]=0;
	i=0;
	j=0;
    while(i<NumberOfTask && j<NumberOfTask)
	//for(i=0,j=0;i<NumberOfTask,j<NumberOfTask;i+2,j+2)
	{
		xFirst=xFirst+x[i]+y[j+1];
		yFirst=yFirst+x[i+1]+y[j];
		i+=2;
		j+=2;
	}
	if(xFirst<yFirst)
		 result=xFirst;

    else
	    result=yFirst;
	printf("%d\n",result );
}
}
