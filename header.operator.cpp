// There are two type of header files
// System header files:-It comes with the compiler
#include <iostream>
// User defined header files:-It is written by the user
#include "visu.cpp" //This header file only open if it includes in the same directory otherwise don't run program

using namespace std;

int main()
{
    int a = 5, b = 4;
    cout << "This is the toturial for header files and operators in c++ :---->\n"
         << endl;
    ;

    // Folling are the types of operators
    // Arithmetic operators
    cout << "These are the Arithmetic operators in c++ :-->>" << endl;
    cout << "The value  of a + b  is :" << a + b << endl;
    cout << "The value  of a - b is :" << a - b << endl;
    cout << "The value  of a * b is :" << a * b << endl;
    cout << "The value  of a / b is :" << a / b << endl;
    cout << "The value  of a % b is :" << a % b << endl;
    cout << "The value  of a++ is " << a++ << endl;
    cout << "The value  of a-- is :" << a-- << endl;
    cout << "The value  of ++a is :" << ++a << endl;
    cout << "The value  of --a is :" << --a << endl;
    cout << "The value  of b++ is :" << b++ << endl;
    cout << "The value  of b-- is :" << b-- << endl;
    cout << "The value  of ++b is :" << ++b << endl;
    cout << "The value  of --b is :" << --b << endl;
    cout << endl;

    // Assignment operators:-- This is used for assign the value of variables
    // int a=5,b=7;
    // char name='v';

    // Comparison operator
    cout << "These are the comparison operators in c++ :-->>" << endl;
    cout << "The comparison of a==b : " << (a == b) << endl;
    cout << "The comparison of a!=b : " << (a != b) << endl;
    cout << "The comparison of a<=b : " << (a <= b) << endl;
    cout << "The comparison of a>=b : " << (a >= b) << endl;
    cout << "The comparison of a<b : " << (a < b) << endl;
    cout << "The comparison of a>b : " << (a > b) << endl;
    cout << endl;
    // Logical operators :---->
    cout << "These are the logical operators in c++ :-->>" << endl;
    cout << "The value of logical not (!(a==b)) is  : " << (!(a == b)) << endl;
    cout << "The value of logical and ((a==b) && (a<b)) is  : " << ((a == b) && (a > b)) << endl;
    cout << "The value of logical or ((a==b) || (a<b)) is  : " << ((a == b) || (a > b)) << endl;

    return 0;
}