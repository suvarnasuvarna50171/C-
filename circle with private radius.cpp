#include<iostream>
using namespace std;
class circle;
class function
{
	public:
	void calculate(circle &c);
};
class circle
{
	private:
	int radius;
	friend class function;
	public:
	void setradius(int r)
	 { 
	radius = r; 
	}
	int getradius()
	{
		return radius;
	}
	friend void function::calculate(circle &c);
};
void function::calculate(circle &c)
{
	cout<<"radius"<<c.radius<<endl;
	int area=3.14*c.radius;
	cout<<"area"<<area<<endl;
}
int main()
{
	circle ci;
	function f;
	int r;
	cin>>r;
	ci.setradius(r);
	f.calculate(ci);
	return 0;
}
