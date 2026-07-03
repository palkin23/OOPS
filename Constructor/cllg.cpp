/*13. Create: College → Department → Student
Use constructors to initialize all data.
*/
#include <iostream>
using namespace std;
class College
{
public:
    string name;
    College(string n)
    {
        name = n;
    }
    void show()
    {
        cout << "College Name:  " << name << endl;
    }
};
class Department : public College
{
public:
    string dep;
    Department(string n, string d) : College(n)
    {
        dep = d;
    }
    void see()
    {
        cout << "Department is : " << dep << endl;
    }
};
class Student : public Department
{
public:
    int roll_no;
    Student(string n, string d, int r) : Department(n, d)
    {
        roll_no = r;
    }
    void display()
    {
        cout << "Roll number of student is:" << roll_no << endl;
    }
};
int main()
{
    Student s1 = {"TIET", "COE", 1025030500};
    s1.show();
    s1.see();
    s1.display();
    return 0;
}