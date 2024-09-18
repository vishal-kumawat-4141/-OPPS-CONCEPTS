#include<iostream>
using namespace std;
    union money
    {
        int rice;
        char car;
        float pounds;
    };
    
int main(){
    union money m1;
    // m1.rice=23;
    // m1.car='b';
    // cout<<"the value of rice is "<<m1.rice<<endl;
     m1.rice=23;
    m1.car='b';
    cout<<"the value of rice is "<<m1.rice<<endl;
    cout<<"the value of car is "<<m1.car<<endl;
    return 0;
}