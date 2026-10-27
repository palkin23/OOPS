#include <bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
   virtual void show()=0;
   //{
       // cout<<"vehicle";
   // }
};
class v1:public Vehicle{
    public:
    void show() override {
        cout<<"v1";
    }
};

int main() {
	// your code goes here
 Vehicle* ptr = new v1();
    ptr->show();
    delete ptr;
   
}