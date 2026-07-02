/*13. Hospital Patient Create a Patient class with patient name, age, disease.
Use constructor and display patient records.
*/
#include<iostream>
using namespace std;
class Patient{
    public:
    string patientname;
    int age;
    string disease;
    Patient(string n , int a , string d){
        patientname=n;
        age=a;
        disease=d;
    }
    void display(){
        cout<<"Patient's Name : "<<patientname<<endl;
        cout<<"Patient's Age  : "<<age<<endl;
        cout<<"Disease        : "<<disease<<endl;
    }

};
int main(){
    Patient p1={"Raj",32,"Cold"};
    Patient p2={"Simran",33,"Stomach ache"};
        p1.display();
        p2.display();

    return 0;
}