#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n,sum=0,remainder,armno;
    cout<< "Enter number ";
    cin>>n;
    
    armno=n;
    while(armno!=0)
    {
    	remainder=armno%10;
    	sum= sum+(remainder*remainder*remainder);
    	armno=armno/10;
	}
	
	if(sum==n)
	{
	cout<<"armstrong no is"<<sum;
	}
	else
	{
	cout<<"not a armstrong no";
    }
getch();
    return 0;
}
