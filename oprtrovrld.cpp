#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
	public:
	 int a,b;
	 public:
	 	void getdata();
	 	void showdata();
	 	complex operator +(complex);
};

complex complex :: operator +(complex c)	 	
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return (temp);
}
void complex :: getdata()
{
	cout<<"enter two numbers";
	cin>>a>>b;
}

void complex :: showdata()
{
	cout<<"a="<<a<<"b="<<b<<endl;
}
int main()
{
	complex d1,d2,d3;
	d1.getdata();
	d1.showdata();
	d2.getdata();
	d2.showdata();
	d3=d1+d2;
	
	d3.getdata();
	d3.showdata();
	getch();
	return 0;
}
