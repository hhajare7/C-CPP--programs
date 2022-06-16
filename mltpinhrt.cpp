#include<iostream>
#include<conio.h>
using namespace std;
class data
{
	public :
		int a,b;
		public :
		void get()
		{
			cout<<"enter two number"<<endl;
			cin>>a>>b;
		}
		void show()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}
};

class adddata : public data
{
	public :
		int sum;
    public :
			void add()
		{
			get();
			show();
			cout<<"sum :"<<(a+b)<<endl;
		}
};

class subdata : public adddata
{
	public :
		int sub;
	public :
	void subt()
	{
		add();
		sub=a-b;
		cout<<"subtraction :"<<sub<<endl;
		}	
};

int main()
{
	subdata c1;
	c1.subt();
	getch();
	return 0;
}
