/*A book shop maintains the inventory of books that are being sold at the shop. The list 
includes details such as author, title, price, publisher and stock position. Whenever a 
customer wants a book, the salesperson, inputs the title and author and the system searches 
the list and displays whether it is available or not. If it is not,appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested copies are available, the total cost of the requested copies is 
displayed; otherwise the message "required copies not in stock is displayed". Design a 
system using a class called books with suitable member functions, constructors and 
destructors. Use dynamic constructor to enter the book information and to allocate the 
memory space required. The search of each book whether it is successful or not is recorded 
as a transaction and the total number of transactions in a system should be recorded.*/
#include<iostream>
#include<cstring>
using namespace std;
class Books{
    public:
  char *author;
  char *title;
  char *publisher;
  float price;
  int stock;

  static int transactions;
  Books(char *a,char *t,char *p,float pr,int s){
   author=new char[strlen(a)+1];
   strcpy(author,a);
   title=new char[strlen(t)+1];
   strcpy(title,t);
   publisher=new char[strlen(p)+1];
   strcpy(publisher,p);
   price=pr;
   stock=s;
   
}
void search(char *a,char *t){
    transactions++;
    if(strcmp(author,a)==0 && strcmp(title ,t)==0){
         cout << "\nBook Found!";
            cout << "\nTitle: " << title;
            cout << "\nAuthor: " << author;
            cout << "\nPublisher: " << publisher;
            cout << "\nPrice: " << price;
            cout << "\nStock: " << stock;
            int copies;
            cout<<"Enter the number of copies: "<<endl;
            cin>>copies;
            if(copies<=stock)
                cout<<"Total cost: "<<price*copies<<endl;
            else
          cout<<"Required copies not in stock"<<endl;
            
    }
   else
   cout<<"Book not found"<<endl;
}
~Books(){
    delete [] author;
    delete [] title;
    delete[] publisher;
}
static void show(){
    cout<<"Total Transactions: "<<transactions<<endl;
}
}; 
int Books :: transactions=0;
int main(){
    Books b1((char*)"C++",(char*)"XYZ",(char*)"PYQ",500,10);
    
    char author[50];
    char title[50];
    cout<<"Enter author name: "<<endl;
    cin>>author;
    cout<<"Enter title name: "<<endl;
    cin>>title;
    b1.search(author,title);
    Books::show();
    return 0;
}