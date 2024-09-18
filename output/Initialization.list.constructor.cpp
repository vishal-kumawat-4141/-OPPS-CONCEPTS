#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        // Test(int i,int j) : a(i),b(i+j){
        // Test(int i,int j) : a(i),b(i-j){
        // Test(int i,int j) : a(i),b(i*j){
        // Test(int i,int j) : a(i),b(i/j){
        // Test(int i,int j) : a(i),b(a+j){
        // ----->this give us value of a is garbage because a is first initialize in class Test
        // Test(int i,int j) : b(j),a(i+b){
        // Test(int i, int j){
        //     a=i;
        //     b=j;
        cout << "Constructor is colled " << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    Test t(20, 10);

    return 0;
}