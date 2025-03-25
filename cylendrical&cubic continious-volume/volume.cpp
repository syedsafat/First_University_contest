#include <iostream>
using namespace std;

//volume of cylendrical

double volume(double radius,double height){
    return 3.1416*radius*height;

}

//volume of cubic continious

double volume(double side){
    return side*side*side;
}

int main(){
    double radius,height,side;

    //intput for cylendrical and cubic

    cout<<"Enter the radius and height for cylendrical=";
    cin>>radius>>height;
    cout<<"Enter the side for cubic=";
    cin>>side;

    //volume of cylendrical and cubic

    cout<<"Volume of cylendrical="<<volume(radius,height)<<endl;
    cout<<"Volume of cubic="<<volume(side)<<endl;
    return 0;
}