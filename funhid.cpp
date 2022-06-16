#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class a
{
	public:
	void get(int k)
	{
		cout<<"base class :"<<k<<endl;
	}
	
};
class b:public a
{
	public:
		void get()
		{
			cout<<"child class : "<<endl;
		}
};

int main()
{
b obj;
obj.get();
obj.a::get(5);
obj.a::get(3);
getch();
return 0;
}
