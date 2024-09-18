#include<iostream>
using namespace std;
//This is the global variable which is declare at out side of the function but this is access all functions
int glo=100; 
//This is sum name function which use global variable 
void sum(){
    int a;
   cout<<glo;
}

//This is global name function which use global variable 
void global(){
    cout<<"\n"<<glo;
}
int main(){
    int glo=50; //This is the local variable which is take high precidence of global variable 
    glo=200;  //This is also local variable but change the privious local variable value
    // int a=10,b=20;
    // float pi=3.14;
    // char section='C';
sum();
cout<<"\n"<<glo;
global();
    return 0;
}