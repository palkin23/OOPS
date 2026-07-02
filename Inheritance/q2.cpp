/*2. Create class Vehicle and class Car inheriting it.
Display vehicle and car details.
*/
#include<iostream>
using namespace std;
class Vehicle{
public:
 int wheel;
 Vehicle(int w){
    wheel=w;
 }
 void display(){
    cout<<"Wheel count :"<<wheel<<endl;
    cout<<"I am vehicle class"<<endl;
 }
};

class Car:public Vehicle{
public:
string color;
string name;
Car(int w , string c , string n):Vehicle(w){
    color=c;
    name=n;
}
void dis(){
    cout<<"Wheel count :"<<wheel<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"I am car class"<<endl;
}
};
int main(){
    Car c1={4,"Black","Mercedez"};
    c1.display();
    cout<<""<<endl;
    c1.dis();
    return 0;
}
