#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    void getname(){    //function declared inside a class
        cout<<name<<endl;
    }
};
int main(){
    Student s1,s2,s3;
    s1.name="Palkin";
    s2.name="Neetu";
    s3.name="Yashvi";
    s1.getname();   //always call a function by ->objectname.function 
    s2.getname();   //only getname() will give error
    s3.getname();
 return 0;
}