/*6.  Create a Book class with title, author, price.
Create 3 book objects and display their information.
*/
#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
   double price;
   Book(string t , string a, double p){
    title=t;
    author=a;
    price=p;
   }
   void display(){
    cout<<" "<<title<<"\t "<<author<<"\t "<<price<<endl;
   }
};
int main(){
    Book b1={"Me" ,"Raj",750};
    Book b2={"You","Simran",800};
    Book b3={"I","Kuljeet",700};
    b1.display();
    b2.display();
    b3.display();
    return 0;
}