#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
		int a;
	public :
		A()
		{
			cout<<"Base constructor"<<endl;
			a=0;
		}
		void showa()
		{
			cout<<"a="<<a<<endl;
		}
};
class B:public A
{
	private:
		int b;
	public :
		B():A()
		{
			cout<<"child class constructor"<<endl;
			b=0;
		}
		void showb()
		{
			cout<<"b="<<b<<endl;
		}
};

int main()
{
	B obj;
	obj.showa();
	obj.showb();
	getch();
	return 0;
}
