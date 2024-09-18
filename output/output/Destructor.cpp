#include <iostream>
using namespace std;
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "This is constructor  called for the object " << count << endl;
    }

    // A destructor is a type of function which is called when the object is destroyed. 
    // Destructor never takes an argument nor does it return any value.
    ~Num()
    {
        cout << "This is destructor called for the object" << count << endl;
        count--;
    }
};

int main()
{
    cout << "Let's start from main function :->" << endl;
    cout << "Create a object first for constructor :->> " << endl;
    Num n1;
    //This is Block of code 
    {
        cout << "Entering the Block ." << endl;
        cout << "Creating two more objects for constructor :-->>>" << endl;
        Num n2, n3;
        cout << "Exiting the Block." << endl;
    }
    cout << "Back to main " << endl;

    return 0;
}