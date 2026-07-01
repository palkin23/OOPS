                                            

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking\n";
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing\n";
    }
};

class Hybrid : public Dog, public Cat {
public:
    void sound() {
        cout << "Hybrid sound\n";
    }
};

int main() {

    Hybrid h;

    h.bark();
    h.meow();
    h.sound();
  //h.eat();
    return 0;
}