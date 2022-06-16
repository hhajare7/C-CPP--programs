#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,m,n,first[10][10],second[10][10],sum[10][10];
	
printf("enter the number of rows and columns\n");
scanf("%d%d",&m,&n);

printf("enter the numbers of first matrix");
	
	for(i=0;i<=m;i++)
	{
	  for(j=0;j<=n;j++)
	  {
	  scanf("%d",&first[i][j]);
      }
    }
    
    printf("enter the numbers of second matrix");
	for(i=0;i<=m;i++)
	{
	 for(j=0;j<=n;j++)
      {
	  scanf("%d",&second[i][j]); 
      }
    } 
      
	  
	  printf("summ of entered matrices:-\n");
     
	 for(i=0;i<=m;i++)
	 {
	 for(j=1;j<=n;j++)
     {
     	sum[i][j]= first[i][j] + second[i][j];
	  printf("%d\t",sum[i][j]);
	  } 
       printf("\n");
	}
	return 0;
}
