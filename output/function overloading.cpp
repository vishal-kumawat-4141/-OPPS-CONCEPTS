#include <iostream>
using namespace std;
// function overloading is many function is used same name but working and argument is different that's called function overloading

// int sum(float a, int b){
int sum(int a, int b)
{
    cout << "This function is having  2 argument" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "This function is having  3 argument" << endl;
    return a + b + c;
}
// volume of cyclinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// volume of cube
int volume(int a)
{
    return (a * a * a);
}

// volume of rectangle
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The addition of 3 and 7 is " << sum(3, 7) << endl;
    cout << "The addition of 3 ,5 and 7 is " << sum(3, 5, 7) << endl;
    cout << "The volume of cyclinder of radious 3 aand height 5  is " << volume(3, 5) << endl;
    cout << "The volume of cube of length 3  " << volume(3) << endl;
    cout << "The volume of rectangel of length 3 , width 5 and height 7 is " << volume(3, 5, 7) << endl;
    return 0;
}