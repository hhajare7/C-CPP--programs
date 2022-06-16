#include<iostream>
#include<conio.h>
using namespace std;

class classic
{
	private:
		int a,b;
		public:
			void getdata()
			{
				cout<<"enter two numbers ";
				cin>>a>>b;
			}
			void showdata()
			{
				cout<<"a="<<a<<"b="<<b<<endl;
			}
			classic operator +(classic);
};
classic classic :: operator +(classic c)
{
	classic temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}

int main()
{
	classic c1,c2,c3;
	c1.getdata();
	c1.showdata();
	c2.getdata();
	c2.showdata();
	c3=c1+c2;
	c3.showdata();
	getch();
	return 0;
}
