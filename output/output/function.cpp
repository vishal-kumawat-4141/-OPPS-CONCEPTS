#include <iostream>
using namespace std;

// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }
// Function prototype:--->for using checking function after the main function
// Syntex-->>type function_name(arrguments);
// int sum(int a,int b);     //this is acceptable for function protype
// int sum(int a,b); //this is not acceptable
int sum(int, int); // this is acceptable
// void g(void); //acceptable
void g();
int main()
{
    int num1, num2;
    cout << "Enter the vlaue of first number" << endl;
    cin >> num1;
    cout << "Enter the vlaue of second number" << endl;
    cin >> num2;
    cout << "the sum is " << sum(num1, num2) << endl; // num1 and num2 is actual parameter
    g();
    return 0;
}
// Formal parameter a and b is taking values from num1 and num2 actual parameter
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void g()
{
    cout << "Good ,Morning everyone" << endl;
}