#include <iostream>
using namespace std;

//function for addition

int result(int a,int b){

    return a+b;

}

//function for subtraction

int result(int a,int b){

    return a-b;
}

//function for multiplier

int result(int a ,int b, double multi){

    return a*b;

}

//function for division

double result(double a,double b){

    if(b!=0){
        return a/b;
    }
    else{
        cout<<"Error:Division by zero!"<<endl;
        return 0;
    }
}


int main(){
    int x,y;
    double multi;
    cout<<"Enter two integers";
    cin>>x>>y;

    cout<<"addition"<<result(x,y)<<endl;
    cout<<"subtraction"<<result(x,y)<<endl;
    cout<<"Multiplication"<<result(x,y,0)<<endl;
    cout<<"division"<<result((double) x,(double) y)<<endl;

    return 0;
}