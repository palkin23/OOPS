#include<iostream>
#include<string>
using namespace std;
class Student{
string name;  //by default->private
public:
//getter function
string getname(){
    return name;
}
//setter function
void setname(string n){
    name=n;
}
};
int main(){
Student s1;
s1.setname("Raj");
cout<<s1.getname()<<endl;
return 0;
}