#include<iostream>
#include<conio.h>
using namespace std;
class base1
{
	public: 
	int a;
	public:
		base1()
	{
		cout<<"base class constructor:"<<endl;
		a=0;
	}
	void showa()
	{
		cout<<"\na="<<a;
	}
};

class base2 : public base1
{
	public:
		int b;
		public:
			base2():base1()
			{
				cout<<"child class constructor:";
				b=5;
			}
			
			void showb()
			{
				cout<<"\nb="<<b;
			}
};

int main()
{
base2 obj;
obj.showb();
obj.showa();
getch();
return 0;
}

