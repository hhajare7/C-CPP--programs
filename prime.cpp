#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,i;
cout<<"Enter the number";
cin>>n;

for(i = 2; i <= n/2; i++)
{
if(n % i ==0)
{
break;
}
}
if(i > n/2)
cout<<"  Prime Number:"<<n;
else
cout<<" not a Prime Number:"<<n;
getch();
    return 0;
}
