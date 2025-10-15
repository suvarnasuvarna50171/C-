#include<iostream>
using namespace std;
int var=100;
namespace FirstSpace
{
	int var=1;
	void display(){
	cout<<"Inside FirstSpace\nvar="<<var<<endl;
}
}
namespace SecondSpace
{
	int var=2;
	void display(){
	cout<<"Inside SecondSpace\nvar="<<var<<endl;
}
}
class Sample{
	public:
		void show();
};
void Sample::show(){
	cout<<"Inside Sample show() function:"<<endl;
}
int main()
{
	int var=10;
	cout<<"Localvariable="<<var<<endl;
	cout<<"Global variable="<<var<<endl;
	FirstSpace::display();
	SecondSpace::display();
	Sample obj;
	obj.show();
	return 0;
}

