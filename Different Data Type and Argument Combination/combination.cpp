#include <iostream>
using namespace std;

//function for diffrent data dype

void type(int n){
    cout<<"Int Type"<<n<<endl;
}

void type(double n){
    cout<<"Double Type"<<n<<endl;
}

//function with two argument

void type(int n1,double n2){
    cout<<"Int Type "<<n1<<",Double type"<<n2<<endl;
}

int main(){
    type(10);
    type(3.14);
    type(10,11.56);
    return 0;
}