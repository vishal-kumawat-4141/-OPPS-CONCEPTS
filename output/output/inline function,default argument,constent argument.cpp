#include <iostream>
using namespace std;
inline int mul(int a, int b)
{ // using inline fuction for utilize the compile timing
    return a * b;
}

float sbi(int current_money, float factor = 1.04) // here factor is default argument and default argument comes in function end
{
    return current_money * factor;
}

// int name(const char *p)
// {
//     // their  char *p is constent which don't changed
// }

int main()
{
    int a, b;
    cout << "The values of a and b is :" << endl;
    cin >> a >> b;
    cout << "The multiplication of a and b is :" << mul(a, b) << endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    // cout<<"The multiplication of a and b is :"<<mul(a,b)<<endl;
    int money = 100000;
    cout << "Customer:- if your bank account RS. " << money << "is have then bank give you  RS. " << sbi(money) << " after 1 year " << endl;
    // here sbi(money) take default values of factor so that is default argument
    cout << "VIP:- if your bank account RS. " << money << "is have then bank give you  RS. " << sbi(money, 1.10) << " after 1 year " << endl;
    return 0;
}