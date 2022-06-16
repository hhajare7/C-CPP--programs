#include<stdio.h>
#include<conio.h>

void swap(int,int);
int main()
{
	int a=10,b=20;
	printf(" before swap : \t%d\t%d\n",a,b);
	swap(a,b);
	printf("after swap : \t%d\t%d\n",a,b);
	getch();
	return 0;
}

void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("little later after swap : \t%d\t%d\n",x,y);
}
