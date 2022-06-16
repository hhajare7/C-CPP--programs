#include<iostream>
#include<conio.h>
using namespace std;
class base1
{
	public :
		int n;
		public :
		void get()
		{
			cout<<"enter any number"<<endl;
			cin>>n;
		}
};

class base2
{
	public:
		int x;
		public:
			void getdata()
			{
				cout<<"enter any no"<<endl;
				cin>>x;
			}
};

class derived: base1,base2
{
	public:
		int i,z;
		public:
			
				void even()
			{
				get();
				for(i=1;i<=n;i++)
				{
					if(i%2==0)
					{
						cout<<i<<endl;
					}
				}
			}
			void table()
			{
				getdata();
				i=1;
				while(i<=10)
				{
					z=x*i;
					cout<<z<<endl;
					i++;
				}
			}
};

int main()
{
	int a;
	derived d1;
	cout<<"press 1. for even no. \n press 2. for table \n Answer:";
	cin>>a;
	switch(a)
	{
		case 1:
			d1.even();
			break;
	    case 2:
	    	d1.table();
	    	break;
	    	default:
	    		cout<<"invalid character";
	    		
	}
	getch();
	return 0;
}
