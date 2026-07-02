/*8. Create base class Account.
Create SavingsAccount and CurrentAccount.
*/
#include<iostream>
using namespace std;
class Base_Account{
public:
double balance;
Base_Account(double b){
    balance=b;
}
void display(){
    cout<<"Balance: "<<balance<<endl;
    cout<<"Base Account"<<endl;
}
};
class Savings_Account:public Base_Account{
public:
double savings;
Savings_Account(double b , double s):Base_Account(b){
    savings=s;
}

void disp(){
    cout<<"Savings: "<<savings<<endl;
}
};
class Current_Account:public Base_Account{
public:
double current;
Current_Account(double b , double c):Base_Account(b){
    current=c;
}
void disp(){
    cout<<"Current balance is : "<<current<<endl;
}
};
int main(){
      Savings_Account s1(5000, 3000);
    Current_Account c1(8000, 6000);

    cout << "Savings Account" << endl;
    s1.disp();
 

    cout << "\nCurrent Account" << endl;
    c1.disp();

    return 0;
}