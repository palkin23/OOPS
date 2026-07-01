/*9. Time Class Create a Time class with hours, minutes, seconds.
Create a function to display time properly.
*/
#include<iostream>
using namespace std;
class Time{
public:
int hours;
int minutes;
int seconds;
Time(int h,int m , int s){
    hours=h;
    minutes=m;
    seconds=s;
}
void display(){
    cout<<"Time is: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
};
int main(){
    Time t1={11,11,11};
    t1.display();
 return 0;
}