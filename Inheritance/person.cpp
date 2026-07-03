/*10. Create: Person → Employee
Person → Student
Employee + Student → WorkingStudent
*/
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    Person(string n){
        name=n;
    }
    void p(){
        cout<<"Name: "<<name<<endl;
        
    }
};
class Employee:virtual public Person{
    public:
    int employee_id;
    Employee(string n , int e):Person(n){
        employee_id=e;
    }
    void e(){
        cout<<"Employee Id is: "<<employee_id<<endl;
    }
};
class Student:virtual public Person{
    public:
    int roll_no;
    Student(string n , int r):Person(n){
        roll_no=r;
    }
    void s(){
        cout<<"Roll Number is: "<<roll_no<<endl;
    }
};
class Working_Student:public Student , public Employee{
    public:
    Working_Student(string n , int r , int e):Person(n),Student(n,r),Employee(n,e){
        
    }
    void display(){
    cout<<"I am a working Student"<<endl;
    }
};
int main(){
    Working_Student w1={"Raj",12,123};
    w1.p();
    w1.e();
    w1.s();
    w1.display();
    return 0;
}