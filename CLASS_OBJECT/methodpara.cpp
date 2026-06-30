#include<iostream>
using namespace std;
class Car{
    public:
    int speed(int maxspeed); //method declared with parameter
};
int Car::speed(int maxspeed){ //function defined with parameter
    return maxspeed;
}
int main(){
    Car c1;
    cout<<c1.speed(200)<<endl;
}