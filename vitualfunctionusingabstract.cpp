#include<iostream>
#include<cmath>
using namespace std;
class Shape{
	public:
		virtual float area() = 0;
};
class Rectangle: public Shape{
	private:
		float length,breadth;
	public:
		Rectangle(float l,float b){
			length = l;
			breadth = b;
		}
		float area() override{
			return length*breadth;
	}
};
class Circle: public Shape{
	private:
		float radius;
	public:
	Circle(float r){
		radius = r;
	}	
	float area() override{
	return M_PI*radius*radius;
	}
};
class Triangle:public Shape{
	private:
		float base,height;
	public:
		Triangle(float b,float h){
			base = b;
			height = h;
		}
		float area() override{
		return 0.5*base*height;
		}
};
int main(){
	Shape* shape;
	Rectangle rect(10,5);
	Circle circ(7);
	Triangle tri(8,6);
	shape = &rect;
	cout<<"Area of Rectangle:"<<shape->area()<<endl;
	shape=&circ;
	cout<<"Area of circle:"<<shape->area()<<endl;
	shape = &tri;
	cout<<"Area of  triangle:"<<shape->area()<<endl;
	return 0;
}
