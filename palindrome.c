#include<stdio.h>
#include<conio.h>

int main()
{
	int num, remainder, pal, result=0;
	printf("enter a number");
	scanf("%d",&num);
	
	pal=num;
	
	while(num!=0)
	{
		remainder=num%10;
		result=result*10+remainder;
		num=num/10;
	}
	
	if(pal==result)
	printf("%d is an pal",pal);
	else
	printf("%d is not pal",pal);
	getch();
	return 0;
}
