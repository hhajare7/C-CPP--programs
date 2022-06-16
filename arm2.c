#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,n,i;
		printf("enter two no");
	    scanf("%d%d",&a,&b);

for(n=a+1;n<=b-1;n++)
{
  for(i=2;i<n;i++)
	 if(n%i==0)
	 break;
	 if(i==n)
	 printf("%d\n",n);
}
}

