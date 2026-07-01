#include<iostream>
using namespace std;
class Grandfather{    //Base Class
  public:
    void myFunction() {
      cout << "Some content in Grandfather class"<<endl;
    }
};

// Derived class (child)
class Father:public Grandfather{
    public:
};
// Derived class (grandchild)
class GrandChild: public Father{ 
    public:

};

int main() {
  Father A;
  GrandChild B;
 A.myFunction();;
 B.myFunction();

  
  return 0;
}