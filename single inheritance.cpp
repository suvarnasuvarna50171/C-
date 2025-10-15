//single inherritance
#include<iostream>
using namespace std;
class animal
{
	public:
		void eat()
		{
			cout<<"Animal is eating."<<endl;
		}
};
class dog:public animal
{
	public:
		void bark()
		{
			cout<<"Dog is barking."<<endl;
		}
};
int main()
{
	dog d;
	d.eat();
	d.bark();
}
