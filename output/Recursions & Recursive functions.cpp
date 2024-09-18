#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
// n=4
// 4*fact(3);
// 4*3*fact(2);
// 4*3*2*fact(1);
// 4*3*2*1=24

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1); // recursive function  like fib(n)
}
// fib(4):---->in fibonacci series repeat the values so it is not proper utilization of code
// fib(2)+fib(3);
// fib(0)+fib(2);
// 1+fib(1);
// 1+1=2

int main()
{
    // Factorial number
    // 6!=6*5*4*3*2*1
    // n!=n*(n-1)!
    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;
    // cout<<"The factorial of "<<a<<" is :"<<fact(a)<<endl;
    cout << "The fibonacci series of " << a << " is :" << fib(a) << endl;

    return 0;
}