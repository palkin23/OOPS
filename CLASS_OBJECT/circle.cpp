/*
11. Circle Create a Circle class with radius.
Use constructor and calculate area and circumference.
*/
#include<iostream>
using namespace std;
class Circle{
    public:
    double radius;
    Circle(double r){
        radius=r;
    }
    void area(){
        cout<<"Area is: "<<3.14*radius*radius<<endl;
    }
    void circumfrence(){
        cout<<"Circumfrence is: "<<2*3.14*radius;
    }
};
int main(){
    Circle c1={20};
    c1.area();
    c1.circumfrence();
    return 0;
}