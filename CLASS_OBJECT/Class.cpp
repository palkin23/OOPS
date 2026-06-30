#include<iostream>
using namespace std;
class Student{            //Declaration of a Class named Student
    public:               //Acess Modifier
    string name;         //Attributes
    int rollnumber;      //Attributes
};
int main(){
    Student s1;      //object declared s1 , format-> classname.object
    s1.name="Palkin";
    s1.rollnumber=33;
    Student s2;
    s2.name="Yashvi";
    s2.rollnumber=39;
   cout<<"Name of student 1: "<<s1.name<<" ,Roll Number of Student 1: "<<s1.rollnumber<<endl;
    cout<<"Name of student 2: "<<s2.name<<" ,Roll Number of Student 2: "<<s2.rollnumber<<endl;
    return 0;
}