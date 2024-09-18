#include<iostream>
#include<iomanip> //This is an header file for setw() manipulator
using namespace std;
int main(){

 int a=33, b=343, c=1236;

//  Using endl manipulators 
 cout<<"The value of a is :"<<a<<endl;
 cout<<"The value of b is :"<<b<<endl;
 cout<<"The value of c is :"<<c<<endl;

 cout<<"The value of a  without setw is :"<<a<<endl;
 cout<<"The value of b  without setw  is :"<<b<<endl;
 cout<<"The value of c without setw  is :"<<c<<endl;

//Using setw() manipulators
 cout<<"The value of a is :"<<setw(4)<<a<<endl;
 cout<<"The value of b is :"<<setw(4)<<b<<endl;
 cout<<"The value of c is :"<<setw(4)<<c<<endl;

     return 0;
}