//multihybrid inheritance
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
class B:public A
{
	public:
		void displayB()
		{
			cout<<"Class B"<<endl;
		}
};
class C:public B
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
class D:public B
{
	public:
		void displayD()
		{
			cout<<"Class D"<<endl;
		}
};
int main()
{
	C c;
	D d;
	c.displayA();
	c.displayB();
	c.displayC();
	d.displayD();
	return 0;
}
