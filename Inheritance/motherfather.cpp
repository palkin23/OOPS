/*5. Create classes: Father, Mother
Create Child inheriting both.
Display properties.
*/
#include<iostream>
using namespace std;
class Father{
    public:
    string name;
    void dis(){
    cout<<"Name of Father: "<<name<<endl;
    }
};
class Mother{
    public:
    string name1;
    void disp(){
        cout<<"Name of Mother: "<<name1<<endl;
    }

};
class Child:public Father,public Mother{
    public:
    string namechild;
    void display(){
        cout<<"Name of child: "<<namechild<<endl;
    }

};
int main(){
    Child c1;
    c1.namechild="Sherry";
    c1.name1="Simran";
    c1.name="Raj";
    c1.display();
    c1.disp();
    c1.dis();
    return 0;

}