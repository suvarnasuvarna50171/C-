//largest of 3 numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter numbers:";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	cout<<"a is greatest :"<<a<<endl;
	else if(b>c&&b>a)
	cout<<"b is greatest :"<<b<<endl;
	else
	cout<<"c is greatest :"<<c<<endl;
}
