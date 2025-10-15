#include<iostream>
using namespace std;
class Anu
{
public:
int x;
Anu()
{
	x=20;
	cout<<"\n in Anu constructor";
}
};
class Meow
{
	public:
		int y;
		Anu a;
		Meow()
		{
			cout<<"\n In Meow constructor";
		}
void show()
{
	cout<<"\nX = "<<a.x<<"\tY="<<y;
}
};
int main()
{
	Meow b;
	b.show();
	return 0;
}
