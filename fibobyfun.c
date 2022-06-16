#include<stdio.h>
#include<conio.h>

void fib();
int main()
{
	fib();
	getch();
}

void fib()
{
	int x,i;
	printf("enter a number");
	scanf("%d",&x);
	
	for(i=0;i<=x;i++)
	if(x<=1)
	{
	printf("%d",x);
	}
	else
	{
	printf("%d",(fib(x-1)+fib(x-2)));
    }
}
