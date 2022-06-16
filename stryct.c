#include<stdio.h>
#include<conio.h>

struct employee
{
	int id;
	char name[50];
	
}e1;

int main()
{
	printf("enter id of employee e1::");
	scanf("%d",&e1.id);
    printf("enter name of employee e1::");
	scanf("%s",&e1.name);
	
	printf("\n id of employee e1: %d",e1.id);
	
	printf("\n name of employee e1: %s",e1.name);
	
	return 0;
}
