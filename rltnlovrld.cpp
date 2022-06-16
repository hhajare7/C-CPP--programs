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
				cout<<"enter two numbers";
				cin>>a>>b;
			}
			void showdata()
			{
				cout<<"a="<<a<<"b="<<b<<endl;
			}
			
			classic operator ++()
			{
			classic temp;
	temp.a=++a;
	temp.b=++b;
	return temp;
			}
				classic operator ++(int)
			{
			classic temp;
	temp.a=a++;
	temp.b=b++;
	return temp;
			}
};

main()
{
	classic c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3=c1++;
	c3.showdata();
	c3=++c2;
	c3.showdata();
getch();
}

