#include<iostream>
using namespace std;
class Animal{
    public:
  void print(){
    cout<<"I am an animal"<<endl;
  }
};
class Dog: public Animal{ 
       //inheritance
       public:
    void bark(){
        cout<<"I am a dog"<<endl;
    }
};
int main(){
    Dog Sherry;
    Sherry.bark();
  Sherry.print();
return 0;
}