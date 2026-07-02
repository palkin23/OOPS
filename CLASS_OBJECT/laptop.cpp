/*15. Laptop Details Create a Laptop class with brand, RAM,
 processor, price.
Create objects and display laptop details.

*/
#include<iostream>
using namespace std;
class Laptop{
    public:
    string brand;
    int RAM;
    string processor;
    double price;

    Laptop(string b, int r, string p, double pr){
        brand = b;
        RAM = r;
        processor = p;
        price = pr;
    }

   
    void display(){
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << RAM << " GB" << endl;
        cout << "Processor: " << processor << endl;
        cout << "Price: Rs. " << price << endl;
    }
};
int main(){
      Laptop l1("Dell", 16, "Intel Core i7", 75000);
    Laptop l2("HP", 8, "AMD Ryzen 5", 55000);

    cout << "Laptop 1 Details:" << endl;
    l1.display();

    cout << "\nLaptop 2 Details:" << endl;
    l2.display();
    return 0;
}