#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Base class constructor called"<<endl;
		}
		~Base(){
			cout<<"Base class destructor called"<<endl;
		}
};
class Derived : public Base{
	public:
		Derived(){
			cout<<"Derived class constructor called"<<endl;
		}
		~Derived(){
			cout<<"Derived class destructor called"<<endl;
		}
};
int main()
{
	cout<<"Creating object of derived class"<<endl;
	Derived obj;
	cout<<"Object created.Existing main"<<endl;
	return 0;
}
