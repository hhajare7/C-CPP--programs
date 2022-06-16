#include<iostream>
#include<conio.h>
using namespace std;
class poly
{
	public :
		int r;
		public :
		void get()
		{
			cout<<"enter the radius"<<endl;
			cin>>r;
		}
};

class circle : public poly
{
	public :
		void area()
		{
			cout<<"radius of circle :"<<(3.14*r*r);
		}
};

int main()
{
	circle c1;
	c1.get();
	c1.area();
	getch();
	return 0;
}
