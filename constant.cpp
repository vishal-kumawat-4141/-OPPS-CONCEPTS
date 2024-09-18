#include<iostream>
using namespace std;
int main(){
    int a=344;
    cout<<"The value of a was :"<<a<<endl;
    a=512;
    cout<<"The value of a is :"<<a<<endl;
// Constants---->>> is use for stoping the changing of the const data value like a=344; then changs a=512;

const int c=300;
cout<<"The value of c is :"<<c<<endl;

// This type of changage not doing because we take value of c is const 
// c=550;
// cout<<"the changes  of c value is : "<<c<<endl;

    return 0;
}