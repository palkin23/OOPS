/* 4. Employee Details Create an Employee class with employee id, name, salary.
Create multiple objects and display employee details.*/
#include<iostream>
using namespace std;
class Employee{
public:
string name;
int employeeid;

};
int main(){
    Employee e1,e2,e3;
    e1.name="Raj";
    e1.employeeid=123;
    e2.name="Simran";
    e2.employeeid=121;
    e3.name="Kulwinder";
    e3.employeeid=122;
   cout<<" "<<e1.name<<"\t "<<e1.employeeid<<endl;
   cout<<" "<<e2.name<<"\t "<<e2.employeeid<<endl;
   cout<<" "<<e3.name<<"\t "<<e3.employeeid<<endl;
   return 0;

}
