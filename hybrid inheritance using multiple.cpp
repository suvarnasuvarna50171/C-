//hybrid inheritance using multiple and herarchial
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"Class A"<<endl;
		}
};
class B
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public A, public B
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
class D:public C
{
	public:
		void displayD()
		{
			cout<<"Class D"<<endl;
		}
};
class E:public C
{
	public:
		void displayE()
		{
			cout<<"Class E"<<endl;
		}
};
int main()
{
	D d;
	E e;
	d.displayA();
	d.displayB();
	d.displayC();
	d.displayD();
	e.displayE();
	return 0;
}
