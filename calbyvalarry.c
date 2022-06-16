#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	int a[]={10,20,30,40,50,60,70};
	
	for(i=0;i<=6;i++)
	display(&a[i]);	
	getch();
	return 0;
}
display (int *m)
{
	printf("%d\n\n",*m);
	return 0;
}
