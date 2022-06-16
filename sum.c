#include<stdio.h>
#include<conio.h>
 main()
 {
 	int a[10],i,se=0,so=0;
 	printf("enter no of terms");
 	for(i=0;i<=9;i++)
 	scanf("%d",&a[i]);
 	for(i=0;i<=9;i++)
 	if(a[i]%2==0)
	 
 	 se=se+a[i];
 	 else
 	 so=so+a[i];
 	 printf("sum of even no is: %d",se);
 	 printf("sum of odd no is : %d",so);
 }
 
