#include<iostream>
using namespace std;


class A {
public:
    virtual void f(int) { cout << "A"; }
};

class B : public A {
public:
    void f(double) { cout << "B"; }
};

int main() {
    B obj;
    A* p = &obj;
    p->f(2.5);
}