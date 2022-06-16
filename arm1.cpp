#include<stdio.h>
#include<conio.h>

main()
{
	int n,s,r,n1;
	
for(n=1;n<=1000;n++){
	s=0;
	n1=n;
	
	while(n1!=0)
	{
		r=n1%10;
		s=s+r*r*r;
		n1=n1/10;
}
	 if(s==n)
	 printf("armstrong no %d\n",n);
}
}

