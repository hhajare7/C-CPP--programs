#include<stdio.h>
#include<conio.h>

int fib(int);
int main()
{
	int n=9,a;
	a=fib(n);
	printf("%d",a);
	getch();
	return 0;
}

int fib(int x)
{
	if(x<=1)
	return x;
	return f(x-1)+f(x-2);
}
