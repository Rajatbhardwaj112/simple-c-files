#include<stdio.h>
int main()
{
	int a, b, c,*j,**k;
	int sum(int,int);
	printf("enter the elements");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum is %d\n",c);
	j=&c;
	k=&j;
	printf("address of sum is %u\n",&c);
	printf("address of sum is %u\n",j);
	printf("value of j is %u\n,j");
	printf("value of c is %u\n",*(&c));
	printf("address of j is %u\n",&j);
	printf("address of j is %u\n",k);
	printf("value of j is %u\n ",*(&j));
	printf("address of k is %u\n",&k);
	printf("value of k is %u\n",k);
	return 0;
}
int sum(int x,int y)
{
	return(x+y);
}

