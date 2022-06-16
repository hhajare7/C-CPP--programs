#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class college
{
	public :
		int clgcode;
		char name[20];
		public :
		void get()
		{
			cout<<"enter college code"<<endl;
			cin>>clgcode;
			cout<<"enter name of the college";
			cin>>name;
		}
		void show()
		{
			cout<<"college code :"<<clgcode<<endl;
			cout<<"college name : "<<name<<endl;
		}
};

class privateclg:public college
{
	public:
		void fine()
		{
		get();
		show();
		cout<<"fine is 1000 "<<endl;
	    }
};

class govtclg:public college
{
	public:
	void fine()
	{
		get();
		show();
		cout<<"there is no fine"<<endl;
	}
};

int main()
{
	privateclg c1;
	c1.fine();
	
	govtclg g1;
	g1.fine();
	getch();
	return 0;
}


