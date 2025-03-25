#include <iostream>
using namespace std;

void type(int n){
    cout<<"Int Type"<<n<<endl;
}

void type(int n1,int n2){
    cout<<"Int Type 2nd"<<n1<<","<<n2<<endl;
}

int main(){
    type(10);
    type(10,11);
    return 0;
}