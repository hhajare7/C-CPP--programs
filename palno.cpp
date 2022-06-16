#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int n,n1,n2,n3,i;

cout<<"enter a number";
cin>>n;

for(i=0;i<=n;i++)
{
	if(i<=1)
	{
	cout<<i<<endl;
	}
	else
	{
	n3=n1+n2;
	cout<<n3<<endl;
	n1=n2;
	n2=n3;
}
}

getch();
    return 0;
}
