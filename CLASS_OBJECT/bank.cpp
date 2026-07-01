/*2. Bank Account Create a BankAccount class with account number, holder name, balance.
Add functions to deposit, withdraw and display balance.
*/
#include<iostream>
using namespace std;
class BankAccount{
    public:
    string Holder_name;
    int accountno;
    double balance;
  void deposit(double depositamount){
    balance+=depositamount;
    cout<<"Rs. "<<depositamount<<"deposited successfully."<<endl;
}
 void withdraw(double withdrawamount){
    if( withdrawamount<=balance){
        balance=balance-withdrawamount;
     cout<<"Rs. "<<withdrawamount<<"is withdrawn successfully"<<endl;
    }else{
        cout<<"Insufficient balance";
    
    }

 }
 void displaybalance(){
    cout<<"Balance is Rs. "<<balance<<endl;
 }

};
int main(){
    BankAccount b1;
    b1.Holder_name="abc";
    b1.accountno=1234;
    b1.balance=1000;
    cout<<" "<<b1.Holder_name<<"\t"<<b1.accountno<<"\t"<<b1.balance<<endl;
  b1.deposit(500);
  b1.withdraw(800);
  b1.displaybalance();


}