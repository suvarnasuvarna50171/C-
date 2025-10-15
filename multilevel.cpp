//multilevel inheritance
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
int main()
{
	C c;
	c.displayA();
	c.displayB();
	c.displayC();
	return 0;
}
