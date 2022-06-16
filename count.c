#include<stdio.h>		
#include<conio.h>

main()
{
 int sum=0,x,r;
 printf("enter a no");
 scanf("%d",&x);
 
while(x!=0)
{
	r=x%10;
	sum=sum+r;
	x=x/10;
}
printf("sum is %d",sum);
getch();
}
