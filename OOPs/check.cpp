#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "A's show function" << endl; }
};

class B {
public:
    void show() { cout << "B's show function" << endl; }
};

class C : public A, public B {
public:
    void display() {
        A::show();  // Resolving ambiguity
        B::show();
    }
};

int main() {
    C obj;
    obj.display();
}
