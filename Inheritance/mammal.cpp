/*4. Create: Animal → Mammal → Dog
Add functions in each class
*/
#include<iostream>
using namespace std;
class Animal{
    public:
    void ani(){
        cout<<"Hi!,I am an Animal"<<endl;
    }
};
class Mammal:public Animal{
    public:
    void mamm(){
    cout<<"Hi , I am a mammal"<<endl;
    }
};
class Dog:public Mammal{
    public:
  void display(){
    cout<<"Hi , I am a dog"<<endl;
  }
  };
int main(){
    Dog d1;
    d1.display();
    d1.mamm();
    d1.ani();
    return 0;
}