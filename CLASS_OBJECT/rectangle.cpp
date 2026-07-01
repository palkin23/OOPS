/*3. Rectangle Create a Rectangle class with length and width.
Use constructor and create functions to calculate area and perimeter.
*/
#include<iostream>
using namespace std;
class Rectangle{
public:
 int length;
 int width;
 Rectangle(int l , int b){
    length=l;
    width=b;
 }
 int Area(){
   int Area=length*width;
    cout<<"Area is : "<<Area<<endl;

 }
int Perimeter(){
    int Perimeter=2*(length+width);
    cout<<"Perimeter is: "<<Perimeter<<endl;
}
 };
int main(){
    Rectangle r1={10,20};
    r1.Area();
    r1.Perimeter();
  return 0;
}