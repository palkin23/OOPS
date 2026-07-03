#include <iostream>
using namespace std;

class Shape
{                 //Abstract Class
public:
    virtual void draw() = 0; // Pure virtual function
    void me()
    {
        cout << "I am a Shape";
    }
    virtual void printRama() = 0; //Pure Virtual Function
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle\n";
    }
    /*you have to override every pure virtual function of abstract class , otherwise
     your derived class will also become an abstract class */
     void printRama() override
    {
        cout << "Rama";
    }
};

int main()
{
    // Error in the below line : Cannot create
    // object of abstract class
    // Shape s;

    // Pointer to abstract class
    // Shape* s = new Circle();
    Circle c;

    // Output: Drawing Circle
    c.draw();
    c.me();
}