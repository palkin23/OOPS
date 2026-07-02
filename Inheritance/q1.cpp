/*1. Create class Person with name and age.
Create class Student inheriting Person.
Use constructors in both classes.
*/
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string n , int a){
        name=n;
        age=a;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Student : public Person{
    public:
 int rollno;
 Student(string n , int a , int r):Person(n,a){
 rollno=r;

 }
 void diplay1(){
     cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll no : "<<rollno<<endl;
 }

 };

int main(){
  Student s1={"ABC",12,1};
  s1.display();
  s1.diplay1();
    return 0;
}