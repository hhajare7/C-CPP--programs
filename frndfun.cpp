#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	private:
		int a,b;
		public:
			void getdata()
			{
				cout<<"enter two numbers";
				cin>>a>>b;
			}
			void showdata()
			{
				cout<<"a="<<a<<"b="<<b<<endl;
			}
			friend void dost (complex );
};
void dost (complex c)
{
	cout<<c.a<<" "<<c.b<<endl;
}
main()
{
	complex c1;
	c1.getdata();
	c1.showdata();
	getch();
}
