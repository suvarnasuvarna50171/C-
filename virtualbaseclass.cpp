#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"Class A display()"<<endl;
		}
};
class B: virtual public A{
	void display(){
			cout<<"Class B contains nothing()"<<endl;
};
class C: virtual public A{
	void display(){
			cout<<"Class C contains something()"<<endl;
};
class D:public B,public C{
};
int main(){
	D d;
	d.display();
	return 0;
}
