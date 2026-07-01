/*8. Simple Calculator Create a Calculator class with two numbers.
Create functions for addition, subtraction, multiplication and division.
*/
#include<iostream>
using namespace std;
class Calculator{
    public:
    double n1;
    double n2;
     double addition(){
        cout<<"Sum: "<<n1+n2<<endl;
     }
     double subtraction(){
        cout<<"Difference: "<<n1-n2<<endl;
     }
     double multiply(){
        cout<<"Product: "<<n1*n2<<endl;
     }
     double division(){
        cout<<"Division: "<<n1/n2<<endl;
     }
  
};
int main(){
    Calculator c1;
    c1.n1=20;
    c1.n2=10;
 c1.addition();
 c1.subtraction();
 c1.multiply();
 c1.division();
 return 0;
}