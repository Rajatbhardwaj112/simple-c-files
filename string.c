#include<stdio.h>
int main()
{
	char name[20];
	char *ch;
	printf("enter the name");
	gets(name);
	puts(name);
	ch=&name;
	printf("address of name is %U \n",&ch);
	return 0;
	
}
