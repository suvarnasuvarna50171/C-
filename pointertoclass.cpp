#include<iostream>
using namespace std;
class Number{
	private:
		int value;
	public:
		void set(int v){
			value = v;
		}
		void show()
		{
			cout<<"Value:"<<value<<endl;
		}
};
int main(){
	Number n;
	Number*ptr=&n;
	ptr->set(100);
	ptr->show();
	return 0;
}

