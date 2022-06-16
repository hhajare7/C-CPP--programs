#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char str[5][10],s[10];
	int i,r,round;
	
	printf("enter 5 names");
	for(i=0;i<=4;i++)
	gets(str[i]);
	
	for(round=1;round<=4;round++)
	{
	for(i=0;i<=4-round;i++){
	
	r= strcmp(str[i],str[i+1]);
	if(r>0)
	{
		strcpy(s,s[i]);
		strcpy(s[i],str[i+1]);
		strcpy(s[i+1],s);
      } 
	}
}
	printf("\nStrings in dictionary order\n");
	for(i=0;i<=4;i++);
	puts (str[i]);
}
