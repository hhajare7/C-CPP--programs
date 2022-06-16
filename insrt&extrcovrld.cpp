#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	private:
		int a,b;
		public:
			friend ostream & operator <<(ostream &,complex);
			friend istream & operator >>(istream &,complex &);
};
 ostream &operator <<(ostream &dout,complex c)
{
	dout<<c.a<<" "<<c.b<<endl;
	return(dout);
	
}
 istream &operator >>(istream &din,complex &c)
 {
 	din>>c.a>>c.b;
 	return(din);
 }
 
 main()
 {
 	complex c1,c2;
 	cout<<"enter real and img part";
 	cin>>c1;
 	cout<<"enter real and img part";
 	cin>>c2;
 	cout<<"values of object c1";
 	cout<<c1;
 	cout<<"values of object c2";
 	cout<<c2;
 	getch();
 }
