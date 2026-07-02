/*7. Create base class Shape.
Create derived classes Circle, Rectangle and Triangle.
*/
#include<iostream>
using namespace std;
class Shape{
    public:
    void dis(){
        cout<<"Hi, I am Shape:the base class"<<endl;
    }
};
class Circle:public Shape{
public:
void disp(){
    cout<<"Circle"<<endl;
}
};
class Rectangle:public Shape{
    public:
    void disp(){
    cout<<"Rectangle"<<endl;
    }
    
};
class Triangle: public Shape{
    public:
    void disp(){
        cout<<"Triangle"<<endl;
    }
};
int main(){
    Circle c1;
    Rectangle r1;
    Triangle t1;
    c1.disp();
    c1.dis();
    r1.disp();
    r1.dis();
    t1.disp();
    r1.dis();
    return 0;
}