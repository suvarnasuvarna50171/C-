//the use of default arguments and access specifiers
#include<iostream>
using namespace std;
class MyClass{
	public:
		int publicVar;
		private:
			int privateVar;
			protected:
				int protectedVar;
				public:
					void setPrivateVar(int val){
						privateVar=val;//Access private member inside class
					}
					int getPrivateVar(){
						return privateVar;
					}
};
int main()
{
	MyClass obj;
	obj.publicVar=10;//Allowed
	//obj privateVar=20;//Error privateVar is private
	obj.setPrivateVar(20);//allowed via public method
	cout<<"Public var:"<<obj.publicVar<<endl;
	cout<<"Private var"<<obj.getPrivateVar()<<endl;
	return 0;
}

