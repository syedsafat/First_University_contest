#include <iostream>
using namespace std;

void type(int n){
    cout<<"Int Type"<<n<<endl;
}

void type(double n){
    cout<<"Double Type"<<n<<endl;
}

int main(){
    type(10);
    type(10.56);
    return 0;
}