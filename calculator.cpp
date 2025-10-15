#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"Enter a and b:";
	cin>>a>>b;
	cout<<"Enter a valid operator:";
	cin>>ch;
	switch(ch)
	{
		case'+':cout<<a+b;
		        break;
		case'-':cout<<a-b;
		        break;
	    case'*':cout<<a*b;
		        break;
		case'/':cout<<a/b;
		        break;    
		default:cout<<"invalid";
		        break;
	}
	return 0;
}

