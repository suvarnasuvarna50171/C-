#include <iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"base class constructor called"<<endl;
		}
		~base(){
			cout<<"base class destructor called"<<endl;
		}
};
class derived : public base{
	public:
		derived(){
			cout<<"derived class constructor called"<<endl;
		}
		~derived(){
			cout<<"derived class destructor called"<<endl;
		}
};
int main()
{
	derived d;
	return 0;
}
