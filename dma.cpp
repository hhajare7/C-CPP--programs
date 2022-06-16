#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int *p= new int;
	float *q= new float;
	*p=5;
	*q=31.45;
	cout<<"p="<<*p<<"q="<<*q<<endl;
	delete p;
	delete q;
	getch();
}
