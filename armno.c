#include<stdio.h>
#include<conio.h>

int main()
{
	int num, remainder, pal, result=0;
	printf("enter a number");
	scanf("%d",&num);
	
	pal=num;
	
	while(pal!=0)
	{
		remainder=pal%10;
		result=result*10+remainder;
		pal=pal/10;
	}
	
	if(result==num)
	printf("%d is an pal",num);
	else
	printf("%d is not pal",num);
	getch();
	return 0;
}
