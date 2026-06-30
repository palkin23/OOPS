#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    int marks;
    Student(string n , int r , int m){     //constructor
        name=n;
        rollno=r;
        marks=m;
    }
    virtual void display(){
        cout<<"Name is : "<<name<<"\t Roll no: "<<rollno<<"\t Marks : "<<marks<<endl;
    }
};
class College: public Student{     //inheritance of student by college
    public:
    string branch;
    College(string n ,int r, int m, string b):Student(n,r,m){   //constructor access given of student to college
        branch=b;
    }
     void display()override{
        cout<<"Name is : "<<name<<"\t Roll no: "<<rollno<<"\t Marks : "<<marks<<"\t Branch : "<<branch<<endl;
}
};


int main(){
    Student s1("A",1,99);
    Student s2("B",2,95);
    College c1("AB",1,99,"COE");
     College c2("DB",3,92,"AI");
    s1.display();
    s2.display();
    c1.display();
    return 0;
}