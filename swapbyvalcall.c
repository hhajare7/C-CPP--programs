#include<stdio.h>
#include<conio.h>

int fact(int);
int main()
{
	int n,res;
	printf("enter a number");
	scanf("%d",&n);
	res=fact(n);
	printf("%d\n",res);
	getch();
	return 0;
}

int fact(int x)
{
	int res;
	if(x==0)
	res=1;
	else
	res=x*fact(x-1);
	return(res);
}
