#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class base1
{
	public: 
	int a;
	public:
	void get()
	{
		cout<<"enter any no";
		cin>>a;
	}
	
};
class base2
{
	public:
		int b;
		public:
			void getdata()
			{
				cout<<"enter any no";
				cin>>b;
			}
};

class derived: public base1,base2
{
	public:
	  int i,z;
	  public:
	  
	  void even()
	  {
	  	get();
	  
	for (i=1;i<=a;i++)
	{
		if(i%2==0)
		{	
		cout<<" even no are:"<<i<<endl;
	    }
	
    }
}
      void table()
      {
       getdata();
       for(i=1;i<=10;i++)
       {
       	z=b*i;
       	cout<<"table:"<<z<<endl;
	   }
	  }
};

int main()
{
	int a;
	derived d1;
	
	cout<<"enter your choice:\n 1. even no: \n 2. table: "<<endl;
	cin>>a;
	switch(a)
	{
	
	case 1:
	{
	d1.even();
	break;
    }
    case 2:
    	{
    		d1.table();
    		break;
		}
	default:
			{
				cout<<"invalid option";
			}
    }
			getch();
}
