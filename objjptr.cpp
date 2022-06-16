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
			cout<<"enter the real and imaginary part";
			cin>>a>>b;
		}
		void showdata()
		{
			cout<<"a="<<a<<"b="<<b<<endl;
		}
};

main()
{
	complex c1;
	complex *ptr;
	ptr=&c1;
	ptr ->getdata();
	ptr -> showdata();
	getch();
}
