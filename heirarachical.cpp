//hierarchial inheritance
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
class C:public A
{
	public:
		void displayC()
		{
			cout<<"Class C"<<endl;
		}
};
int main()
{
	B b;
	C c;
	b.displayA();
	b.displayB();
	c.displayC();
	return 0;
}
