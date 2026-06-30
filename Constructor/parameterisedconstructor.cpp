#include<iostream>
using namespace std;
class Car{
    public:
    string brand;   //attributes
    string model;
    int year;
    Car(string b , string m, int y){     //Parameterised Constructor
        brand =b;
        model=m;
        year=y;
    }
  Car(){
         //default constructor is for attributes of objects which you want to declare later
    }  
};
int main(){
     Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);
        Car c3;
        c3.brand="Ford1";
        c3.year=1999;


  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  cout<<c3.brand<<" "<<c3.year<<endl;
  return 0;
}
