#include<stdio.h>
#include<conio.h>

int main()
{
	int i,sum=0,average,a[5]={10,20,30,40,50};
	
	for(i=0;i<=4;i++)
	{
	printf("%d\n",a[i]);
	}
	for(i=0;i<=4;i++)
	sum=sum+a[i];
	printf("\n%d\n\n",sum);
	
	average=sum/i;
	printf("%d\n",average);
	getch();
	return 0;
}

