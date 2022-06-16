#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class a
{
	public:
	void get()
	{
		cout<<"base class :"<<endl;
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
obj.a::get();
getch();
return 0;
}
