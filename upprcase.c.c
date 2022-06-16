#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	char str[20];
	printf("enter a string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		str[i]=str[i]-32;
	}
	printf("%s",str);
}
