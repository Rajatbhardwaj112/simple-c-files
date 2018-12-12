#include<stdio.h>
int main()
{
	int avg(int)
	int a[5],i;
	int sum=0;
	int av;
	
	for(i=0;i<=5;i++)
	{
		printf("enter the elements");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		sum= sum+a[i];
	}
	av=avg(sum);
	return 0;
}
int avg( int x)
{
	float avge;
	avge= x/6.0;
	return(avge);
}
