//Virtual base classes
#include<iostream>
using namespace std;
class A{
	public:
		int x;
		A(){
			x=10;
			cout<<"constructor of A called"<<endl;
		}
};
class B: virtual public A{
	public:
		B()
		{
			cout<<"constructor of B called"<<endl;
		}
};
class C:virtual public A{
	public:
		C(){
			cout<<"constructor of C called"<<endl;
		}
};
class D:public B,public C{
	public:
		D(){
			cout<<"constructor of D called"<<endl;
		}
		void show() {
			cout<<"Value of x="<<x<<endl;
		}
};
int main()
{
	D obj;
	obj.show();
	return 0;
}

