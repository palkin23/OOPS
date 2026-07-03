/*14. Create: Company → Employee → Developer
Add constructors and display complete information.
*/
#include <iostream>
using namespace std;

class Company
{
public:
    string companyName;

    Company(string c)
    {
        companyName = c;
    }
};

class Employee : public Company
{
public:
    string employeeName;
    int employeeID;

    Employee(string c, string n, int id) : Company(c)
    {
        employeeName = n;
        employeeID = id;
    }
};

class Developer : public Employee
{
public:
    string language;

    Developer(string c, string n, int id, string lang)
        : Employee(c, n, id)
    {
        language = lang;
    }

    void display()
    {
        cout << "Company Name: " << companyName << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Programming Language: " << language << endl;
    }
};

int main()
{
    Developer d1("Apple", "Palkin", 101, "C++");

    d1.display();

    return 0;
}