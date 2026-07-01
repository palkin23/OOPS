/*7. Car Details Create a Car class with company, model, year.
Create constructor and a function to print car details.
*/
#include <iostream>
using namespace std;

class Car{
public:
    string company;
    string model;
    int year;
 Car(string c, string m, int y)
    {
        company = c;
        model = m;
        year = y;
    }
 void display()
    {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car c1("Toyota", "Fortuner", 2023);

    c1.display();

    return 0;
}