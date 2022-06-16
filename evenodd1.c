#include<stdio.h>
#include<conio.h>
int evenodd(int);
int main()
{
	int n,iseven;
	printf("enter a number");
	scanf("%d",&n);
	
	iseven =evenodd(n);
	if(iseven==0)
    printf("its even",n);
    else
    printf("its odd",n); 
	getch();
}

int evenodd(int n)
{
	if(n%2==0)
    return 0;
    else
    return 1;
 } 

