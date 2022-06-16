#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,a[100];
	printf("enter a number");
	scanf("%d",&n);
	printf("\n");
	
	for(i=0;i<=n;i++)
	{
	printf("enter the values %d",i+1);
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[0]<a[i])
		a[0]=a[1];
	}
	printf("largest element is %d",a[0]);
	getch();
	return 0;
}

