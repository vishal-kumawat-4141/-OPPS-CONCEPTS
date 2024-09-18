#include <iostream>
using namespace std;

int main()
{
    // Array:->array is an collection of items similer type store contgious address locations
    // Array Example type:->1
    int marks[] = {12, 14, 56, 29};

    // Array Example type:->2
    int mathmarks[4];
    mathmarks[0] = 456;
    mathmarks[1] = 513;
    mathmarks[2] = 613;
    mathmarks[3] = 714;

    // we are change the value of array items
    // mathmarks[0]=10000;

    cout << "The values of marks are :-->" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    cout << "The value of mathmarks are :--->" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    // by using for loop
    /*
    for(int i=0; i<4; i++){
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    }
    */

    // by using while loop
    /*
    int i=0;
    while (i<4)
    {
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
        i++;
    }
    */

    // by  using do-while loop
    /*
    int i = 0;
    do
    {
        cout << "The value of marks " << i << " is: " << marks[i] << endl;
        i++;

    } while (i < 4);
    */
    return 0;
}