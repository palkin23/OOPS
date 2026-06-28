#include<iostream>
using namespace std;
class Dog{  //class declared
    public:
 string bark(); //function declared
};
string Dog::bark(){     //method defined outside the class with the help of scope resolution operator(::)
    return "woof";
}
int main(){
    Dog sherry;
    cout<<sherry.bark()<<endl;
}