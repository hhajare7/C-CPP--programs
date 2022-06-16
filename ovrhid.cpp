#include<iostream>
#include<conio.h>
using namespace std;

class base
{
	public:
		void msg(int k)
		{
			cout<<"base message"<<k;
		}
};
class derived : public base
{
	public:
		void msg()
		{
			cout<<"chlild class message"<<endl;
		}
};

int main()
{
	derived a;
	a.msg();
	a.base::msg(7);
	getch();
	return 0;
}
