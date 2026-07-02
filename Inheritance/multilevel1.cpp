/*3.Create: Person → Employee → Manager
Add constructors and display all details.*/
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    Person(string n){
        name=n;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Parent class"<<endl;
    }
};
class Employee:public Person{
    public:
    int employeeid;
    Employee( string n , int e):Person(n){
        employeeid=e;
    }
    void display1(){
        
        cout<<"Employee Id: "<<employeeid<<endl;
        cout<<"I am Child Class"<<endl;

    }
    
};
class Manager:public Employee{
    public:
    string domain;
    Manager(string n , int e,string d):Employee(n,e){
        domain=d;
    }
    void display2(){
        cout<<"Domain: "<<domain<<endl;
        cout<<"I am Grandchild class"<<endl;

    }
};
int main(){
    Manager m1={"Raj",1234,"Finance"};
    m1.display2();
    m1.display1();
    m1.display();
    return 0;
}