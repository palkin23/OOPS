
#include <iostream>
using namespace std;

class base {
    int a;

public:
    void showData(int x) {
        a = x;
        cout << "a:" << a << endl;
    }
};

class derived : public base {
    int b;

public:
    void showData() {
        b = 7;
        cout << "b:" << b << endl;
    }
};

int main(void) {
    base base_ob;
    base_ob.showData(5);

    derived derived_ob;
    derived_ob.showData();
   // derived_ob.showData(6);  // This will cause an error

    return 0;
}
