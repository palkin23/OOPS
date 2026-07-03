#include<iostream>
using namespace std;
class Parent{   //Abstract Class
    public:
    virtual void sayname()=0;
};
class Child:public Parent{
    public:
    void sayname() override{
        cout<<"Hi , My class is derived class"<<endl;
    }
};
int main(){
    Parent *p=new Child();  //pointer to obj of abstract class
    p->sayname();
    return 0;
}