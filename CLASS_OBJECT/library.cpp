/*14. Library System Create a LibraryBook class with book id, title, availability status.
Create functions to issue and return books.
*/
#include<iostream>
using namespace std;
class Library{
    public:
    string title;
    int bookid;
    string availabilty;
    Library(string t , int b, string a){
        title=t;
        bookid=b;
        availabilty=a;
    }
    void display(){
       cout<<"Book name: "<<title<<endl;
    cout<<"Book id  : "<<bookid<<endl;
    cout<<"Availability Status: "<<availabilty<<endl;
    }
  void issue(){
 if (availabilty=="Yes"){
    availabilty="No";  //as book is now issued
     cout<<"Issued Successfully"<<endl;
 } else{
     cout<<"Not avavilable"<<endl;
 }
    }
    void returnbook(){
        if(availabilty=="No"){
            availabilty="Yes";
            cout<<"Book returned"<<endl;
        }else{
            cout<<"Book already available"<<endl;
        }
    }
};
int main(){
    Library l1={"Atomic Habits",123,"Yes"};
    Library l2={"Helen Keller",124,"No"};
   l1.display();
    l1.issue();
    l2.display();
    l2.issue();
    l1.display();
   l2.returnbook();
   l2.display();
   return 0;
 


}
