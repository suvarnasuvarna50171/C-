#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return a + b;
}
inline double add(double a,double b){
	return a + b;
}
inline int add(int a,int b,int c){
	return a + b + c;
}
int main(){
	cout<<"add(5,10)="<<add(5,10)<<endl;
	cout<<"add(2.7,3.5)="<<add(2.7,3.5)<<endl;
	cout<<"add(1,2,3)="<<add(1,2,3)<<endl;
	return 0;
}
