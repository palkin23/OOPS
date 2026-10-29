#include <bits/stdc++.h>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    Complex operator +(const Complex &other)const{   
        //binary operator overloading as member funtion
        return Complex(real+other.real,imag+other.imag);
    }
    Complex operator - ()const{
         //unary operator overloading as member funtion
        return Complex(-real,-imag);
    }
    void display(){
        cout<<real<<"+"<<imag<<"i";
    }

};
int main() {
	// your code goes here
	Complex a(2,3),b(4,5);
	Complex c=a+b;
	c.display();
	Complex d=-a;
	d.display(); 
    return 0;
}
