#include<iostream>
using namespace std;
class Student{   //declaration of a class
    public:
    string name;
    Student(){    //declaration of a constructor
        cout<<"Hi I am A constructor of class Student"<<endl;
    }

};
int main(){
    Student s1;
    s1.name="Raj";
   cout<<s1.name<<endl;
return 0;
}