#include<iostream>
using namespace std;
int main(){
    int a=5,b=6;
    int d=((((b*10)+5)-a)+10);//This is operator precidence as  *+-+ 
    int c=a*5+b;
    cout<<c<<endl;
    cout<<d;

     return 0;
}
