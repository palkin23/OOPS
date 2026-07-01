//1. Student Management Create a Student class with data members: name, roll number, marks.
//Use constructor to initialize values. Create objects and display student details
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    int marks;
 Student( string n , int r, int m){
    name=n;
    rollno=r;
    marks=m;
 }
};
int main(){
    Student s1={"Raj",1,99};
    Student s2={"Simran",2,100};
  cout<<" "<<s1.name<<"\t "<<s1.rollno<<"\t "<<s1.marks<<endl;
  cout<<" "<<s2.name<<"\t "<<s2.rollno<<"\t "<<s2.marks<<endl;
  return 0;
}
