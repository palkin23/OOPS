/*15. Create: Account → SavingsAccount → PremiumAccount
Use constructor chaining and display account details.
*/
#include<iostream>
using namespace std;
class Account{
    protected:
 string holder_name;
 public:
 Account (string n){
    holder_name=n;
 }
};
class Savings_Account:public Account{
    protected:
   double savings;
   public:
   Savings_Account(string n , double s):Account(n){
    savings=s;
   }
};
class Prenium_Account:public Savings_Account{
public:
Prenium_Account(string n , double s):Savings_Account(n,s){

}
void display(){
    cout<<"Account Holder name: "<<holder_name<<endl;
    cout<<"Savings: "<<savings<<endl;
    cout<<"You are premium account holder"<<endl;
}
};
int main(){
    Prenium_Account p1={"Raj",110000};
    p1.display();
    return 0;
}