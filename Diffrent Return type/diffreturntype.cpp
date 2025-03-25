#include <iostream>
using namespace std;
//function return int

int add(int a,int b){
    return a+b;
}

//function return double

double add(double a,double b){
    return a+b;
}

int main(){
    cout<<"INT"<<add(5,10)<<endl;
    cout<<"DOuble"<<add(5.12,10.90)<<endl;
    return 0;
}