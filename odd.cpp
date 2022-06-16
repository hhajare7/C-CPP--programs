#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char ch;
	cout<<"enter a character";
	cin>>ch;
	
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<ch<<"\n";
		cout<<"its a vowel";
	}
	else
	{
		cout<<ch<<"\n";
		cout<<"its a consonant";
	}
	getch();
	return 0;
}
