#include<stdio.h>		
#include<conio.h>

main()
{
int a[3][3],b[3][3],c[3][3];
int i,j;

printf("enter matrices 1 elements\n");
for (i=0;i<=2;i++)
    
	for(j=0;j<=2;j++)
		
		scanf("%d",&a[i][j]);
	


    printf("enter matrices 2 elements\n");
    for (i=0;i<=2;i++)

	   for(j=0;j<=2;j++)
		
		scanf("%d",&b[i][j]);
	
    
    printf("\nsum is ");
    for (i=0;i<=2;i++){
    
	for(j=0;j<=2;j++){
		
	c[i][j]=a[i][j]+b[i][j];
	printf("%d",c[i][j]);
}
}
    
getch();
}
