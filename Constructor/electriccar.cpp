/*12. Create: Vehicle → Car → ElectricCar
Use parameterized constructors in all classes.
*/
#include<iostream>
using namespace std;
class Vehicle{
    public:
    int wheel_count;
    Vehicle(int w){
        wheel_count=w;
    }
    void show(){
        cout<<"No of wheels: "<<wheel_count<<endl;
    }
};
class Car:public Vehicle{
    public:
    string name;
    Car(int w , string n):Vehicle(w){
        name=n;
    }
    void see(){
        cout<<"Car is : "<<name<<endl;
    }
};
class Electric_Car:public Car{
    public:
    double engine_power;
    Electric_Car(int w ,string n ,double p):Car(w,n){
        engine_power=p;
    }
    void display(){
        cout<<"Power of engine is:"<<engine_power<<endl;
    }
};
int main(){
    Electric_Car e1={4,"XEV 9S",286};
    e1.show();
    e1.see();
    e1.display();
    return 0;
}