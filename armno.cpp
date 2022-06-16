#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n,sum=0,remainder,palno;
    cout<< "Enter number ";
    cin>>n;
    
    palno=n;
    while(palno!=0)
    {
    	remainder=palno%10;
    	sum= sum*10+remainder;
    	palno=palno/10;
	}
	
	if(n==sum)
	{
	cout<<"palindrome no is"<<sum;
	}
	else
	{
	cout<<"not a palindrome no";
    }
getch();
    return 0;
}
