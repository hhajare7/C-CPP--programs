#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public :
		void funa()
		{
			cout<<"function is in A";
		}
};
class B1:virtual public A
{
	public :
		void funb1()
		{
			cout<<"function is in B1";
		}
};
class B2:virtual public A
{
	public :
		void funb2()
		{
			cout<<"function is in B";
		}
};
class C:public B1,public B2
{
	public :
		void func()
		{
			cout<<"function is in C";
		}
};

int main()
{
	class C O1;
	O1.func();
	O1.funb1();
	O1.funb2();
	O1.funa();
	getch();
	return 0;
	
}
