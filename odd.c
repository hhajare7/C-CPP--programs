#include<stdio.h>		
#include<conio.h>

main()
{
 int count=0,x;
 printf("enter a no");
 scanf("%d",&x);
 
while(x!=0)
{
	x=x/10;
	count++;
}
printf("total digits are %d",count);
getch();
}
