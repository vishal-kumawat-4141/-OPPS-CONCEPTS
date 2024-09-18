#include <iostream>
using namespace std;
//forword decleration 
class Complex;

class Calculater
{
    public:
    int Data(int a, int b)
    {
        return a + b;
    }

    int sumRealNumber(Complex, Complex);
    int sumCompNumber(Complex, Complex);
};

class Complex
{
    int a, b;
    
    //by the function member of class friends
    // friend int Calculater ::sumRealNumber(Complex, Complex);
    // friend int Calculater ::sumCompNumber(Complex, Complex);

    //by the whole class is friend
    friend class Calculater;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculater ::sumRealNumber(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculater ::sumCompNumber(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex c1, c2;
    c1.setNumber(2, 4);
    c2.setNumber(3, 5);
    Calculater calc;
    int res = calc.sumRealNumber(c1,c2);
    cout << "The sum of real number " << res << endl;
    
    int resc = calc.sumCompNumber(c1,c2);
    cout << "The sum of comp number " << resc << endl;


    return 0;
}