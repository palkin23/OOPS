/*10. Product Inventory Create a Product class with product id, 
name, quantity, price.
Create functions to update quantity and display product information.
*/
#include<iostream>
using namespace std;
class Product{
    public:
 string name;
 int productid;
 int quantity;
 double price;
 Product(string n , int p , int q , double pr){
    name=n;
    productid=p;
    quantity=q;
    price=pr;
 }
 int updatequantity(int qt){
    cout<<"Updated quantity is : "<<qt<<endl;
 }
 void display(){
    cout<<"Product name: "<<name<<endl;
    cout<<"Product id: "<<productid<<endl;
    cout<<"Product Qunatity: "<<quantity<<endl;
    cout<<" Product Price: "<<price<<endl;
 }
};
int main(){
    Product p1={"Toy",123,15,1000};
    p1.display();
  p1.updatequantity(20);
  return 0;
}
