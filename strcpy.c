#include<stdio.h>
#include<conio.h>
#include<string.h>
void displayString(char str[]);
int main()
{
	char str1[10]="hemo\n",str2[10]="hamuo\n";
	
	printf("copied in :%s\n",strcat(str1,str2));
	
	return 0;
}
