/*6. Create: Teacher and Researcher
Create Professor inheriting both.
*/
#include<iostream>
using namespace std;
class Teacher{
    public:
    void dis(){
        cout<<"I am a teacher";
    }
};
class Researcher{
    public:
    void disp(){
        cout<<"+ I am a reasearcher";
    }
};
class Professor:public Teacher,public Researcher{
    public:
    void display(){
        cout<<"= I am a Professor"<<endl;
    }

};
int main(){
    Professor p1;
    p1.dis();
    p1.disp();
    p1.display();
    return 0;
}
