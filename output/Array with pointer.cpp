#include<iostream>
using namespace std;

int main(){
     int marks[] = {12, 14, 56, 29};
     int *p=marks;
     /*
     cout<<*(p++)<<endl;
     cout<<*(p++)<<endl;
     cout<<*(++p)<<endl;
     */

     cout<<"The value of *p : "<<*p<<endl;
     cout<<"The value of *(p+1): "<<*(p+1)<<endl;
     cout<<"The value of *(p+2): "<<*(p+2)<<endl;
     cout<<"The value of *(p+3): "<<*(p+3)<<endl;

    return 0;
}