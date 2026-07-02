/*12. Movie Details Create a Movie class with movie name, actor name, rating.
Create objects and display details.
*/
#include<iostream>
using namespace std;
class Movie{
    public:
    string moviename;
    string actorname;
    double rating;
    Movie(string m ,string a , double r){
        moviename=m;
        actorname=a;
        rating=r;

    }
    void display(){
        cout<<"Movie Name: "<<moviename<<endl;
        cout<<"Actor name: "<<actorname<<endl;
        cout<<"Ratings: "<<rating<<endl;
    }

};
int main(){
    Movie m1={"Jak Tak Hai Jaan" , "Katrina Kaif , Anushka Sharma and SRK", 4.5};
    Movie m2={"Jab We Met","Kareena Kapoor Khan and Shahid Kapoor",4.5};
    m1.display();
    m2.display();
    return 0;
}