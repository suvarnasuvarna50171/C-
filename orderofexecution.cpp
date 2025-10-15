#include<iostream>
using namespace std;
class animal{
	public:
		animal()
		{
			cout<<"animal constructor"<<endl;
		}
		~animal(){
			cout<<"animal destructor"<<endl;
		}
};
class dog:public animal{
	public:
		dog()
		{
			cout<<"dog constructor"<<endl;
		}
		~dog(){
			cout<<"dog destructor"<<endl;
		}
};
int main()
{
	dog obj;
	return 0;
};
