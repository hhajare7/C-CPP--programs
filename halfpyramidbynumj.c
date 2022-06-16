#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	printf("enter a value");
	scanf("%d",&n);

	for(i=1;i<=n;++i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%c",'a'+i-1);
		}
	
 printf("\n");
}
	getch();
}
