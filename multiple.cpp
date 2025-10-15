#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "class A" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "class B" << endl;
    }
};

class C : public B {
public:
    void displayC() {
        cout << "class C" << endl;
    }
};

class D : public B {
public:
    void displayD() {
        cout << "class D" << endl;
    }
};

int main() {
    C o1;
    o1.displayB();   // From class B
    o1.displayA();   // From class A
    o1.displayC();   // From class C

    D o2;
    o2.displayB();   // From class B
    o2.displayA();   // From class A
    o2.displayD();   // From class D

    return 0;
}
