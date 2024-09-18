#include<iostream>
using namespace std;
    class Complex
{
    int a, b;

public:
    Complex(int ,int ); //  parameterized construction decleration
    void dispay()
    {
        cout << "The value of complex is " << a << " + " << b << "i" << endl;
    }
};

// ----> This is a parameterized constructor as it takes 2  parameters
Complex ::Complex(int x,int y)
{
    a = x;
    b = y;
}

int main(){
    //Implicit call
    Complex c(4,5);
    c.dispay();

    //Explicit call
    Complex ans=Complex(6,7);
    ans.dispay();


    
    return 0;
}