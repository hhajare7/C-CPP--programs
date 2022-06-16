#include<stdio.h>
#include<conio.h>

int main()
{
	int i=100;
	int *ptr;
	ptr= &i;

printf("%u\n",i);
printf("%u\n",ptr);
printf("%u\n",&i);
printf("%u\n",&ptr);
printf("%u\n",*ptr);
printf("%u\n",*(&i));

getch();

    return 0;
}
