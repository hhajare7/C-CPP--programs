#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c,D;
	float x,y;
    printf("enter coefficients of x2,x and constant ");
    scanf("%d %d %d",&a,&b,&c);
    D= b*b-4*a*c;
    
    if(D<0)
    {
	printf("roots are imaginary");
    }

    if(D==0)
    {
	printf("both roots are equal");
    x=-b/(2.0*a);
    printf("root is %d",x);
}
    if(D>0)
 {
    printf("roots are distinct");
    x=(-b+sqrt(D))/(2*a);
    y=(-b-sqrt(D))/(2*a);
	printf("roots are %f %f",x,y);
    }
}
