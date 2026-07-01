#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student( Student &s){  //copy constructor
        name=s.name;
    }
    Student(){
        //default constructor
    }
};
int main(){
    Student s1;
    s1.name="Raj";
   Student s2(s1); //calls copy constructor
   cout<<" " <<s2.name<<endl;
return 0;
}