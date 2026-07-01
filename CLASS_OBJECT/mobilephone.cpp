/*5. Mobile Phone Create a Mobile class with brand, model, price.
Use constructor to initialize and create a function to show details.
*/
#include<iostream>
using namespace std;
class Mobile{
      public:
    string brand;
    string model;
   double price;
    Mobile(string b,string m , double p){
  brand=b;
    model=m;
    price=p;
   }
   void display(){
    cout<<" "<<brand<<"\t "<<model<<"\t "<<price<<endl;
   }
};
int main(){
    Mobile m1={"Oneplus","11R",40000};
     Mobile m2={"Oneplus","nord4",210000};
m1.display();
   m2.display();
    
    return 0;
}