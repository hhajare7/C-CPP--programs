#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	
	if(n%2==0)
	{
		cout<<"even number\n"<<n;
	}
	else{
		cout<<"odd number\n"<<n;
	}
	getch();
	return 0;
}
