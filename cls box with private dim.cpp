 #include<iostream>
 using namespace std;
 class box;
 class function
 {
 	public:
 	void dimensions(box &b);
 };
 class box
 {
 	private:
 	int length;
 	int breath;
 	int height;
 	public:
 	void setLength(int l) { length = l; }
    void setBreath(int b) { breath = b; }
    void setHeight(int h) { height = h; }
 	friend class function ;
 };
 void function::dimensions(box &b)
 {
 	cout<<"length"<<b.length<<endl;
 	cout<<"breath"<<b.breath<<endl;
 	cout<<"height"<<b.height<<endl;
 	int volume=b.length*b.breath*b.height;
 	cout<<"volume"<<volume<<endl;
 }
 int main()
 {

 	box bo;
 	int l, b, h;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breath: ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;
     bo.setLength(l);
    bo.setBreath(b);
    bo.setHeight(h);
 	function f;
 	f.dimensions(bo);
 }
