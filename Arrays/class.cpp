#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle{
 private:
 int length;
 int breadth;
public:
//non parameterised or dafault constructor
//used for initialization as we do in main l=0,b=0
 Rectangle(){     
     length = 0;
     breadth= 0;
 }
 //parameterized
 Rectangle(int l, int b){     
     length = l;
     breadth= b;
 }

int area(){
    return length*breadth;
}
int perimeter(){
    return 2*(length+breadth);
}
int vol();//scope resolution

 void setlength(int l){
  length =l;
}
 void setbreadth(int b){
  breadth =b;
}
int getlength(){
    return length;
}
int getbreadth(){
    return breadth;
}

//destructor
~Rectangle(){
    cout<<"Destructor";
}

};

int Rectangle:: vol(){
    cout<<"rectangle dont have volume";
}

int main(){
Rectangle r(10,5);
cout<<"area is "<<r.area()<<endl;
cout<<"vol is: "<<r.vol()<<endl;
cout<<"perimeter is "<<r.perimeter()<<endl;

return 0;
}