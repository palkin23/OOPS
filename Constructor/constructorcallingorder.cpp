/*11. Create class A with constructor.
Class B inherits A and has its own constructor.
Understand constructor calling order.
*/
#include <iostream>
using namespace std;
class A
{
public:
    int roll;
    A(int r)
    {
        roll = r;
    }
    void show()
    {
        cout << "Roll no is: " << roll << endl;
    }
};
class B : public A
{
public:
    int age;
    B(int r, int a) : A(r)
    {
        age = a;
    }
    void display()
    {
        cout << "Age is: " << age << endl;
    }
};
int main()
{
    B b1(12, 6);  //calling constructor
    b1.show();
    b1.display();
    return 0;
}