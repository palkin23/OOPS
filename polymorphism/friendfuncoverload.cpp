#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    friend Complex operator +(const Complex &a, const Complex &b);
    void display(){
     cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
Complex operator +(const Complex &a,const Complex &b){
    return Complex(a.real+b.real,a.imag+b.imag);
}
int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c3=c1+c2;
    c3.display();
}