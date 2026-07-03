/*9. Create: Student → Test
Student → Sports
Test + Sports → Result
*/
#include <iostream>
using namespace std;
class Student
{
public:
string name;
Student(string n){
    name=n;
}
void disp(){
    cout<<"Name: "<<name<<endl;
    cout<<"This is a student"<<endl;
}
};
class Test : public Student
{
public:
int marks;
Test(string n , int m):Student(n){
    marks=m;
}
void show(){
    cout<<"Marks: "<<marks<<endl;
}
};
class Sports : public Student
{
public:
string sports;
Sports(string n , string s):Student(n){
    sports=s;
}
void game(){
    cout<<"Sports: "<<sports<<endl;
}
};
class Results : public Test, public Sports
{
public:
 Results(string n , int m , string s):Student(n),Test(n,m),Sports(n,s){}


};
int main()
{
    Results r1={"Raj",23,"Badminton"};
    r1.disp();
    r1.show();
    r1.game();
    return 0;
}
