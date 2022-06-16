#include<stdio.h>
#include<conio.h>

void main()
{
	int x=10,*p;
	p=&x;
	
	printf("%d\n",x);
	printf("%u\n",x);
	printf("%d\n",p);
	printf("%u\n",p);
	printf("%d\n",&x);
	printf("%u\n",&x);
	printf("%d\n",*p);
	printf("%u\n",*p);
	printf("%d\n",&p);
	printf("%u\n",&p);
	printf("%d\n",&(*p));
	printf("%u\n",&(*p));
	getch();
}
