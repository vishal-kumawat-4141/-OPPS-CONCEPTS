#include <iostream>
using namespace std;

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = lunch;
    cout << m1 << endl;
    // cout<<(m1==1);//if is correct then print 1 otherwise print 0

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    return 0;
}