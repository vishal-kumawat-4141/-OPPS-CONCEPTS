#include <iostream>
using namespace std;

int main()
{
    /*
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
        if (i == 3)
        {
            continue;//this is use for continue the values for comming statement
        }
    }
    */
    /*
    Running syntax:-
   first start for loop then go to if condition
      and check condition if condition false
      then cout<<i;
      if condition is true
      then go to for loop
      then continue
    */
    for (int i = 0; i <= 10; i++)
    {
        if (i == 3)
        {
            continue; // this statement it use their for remove value of 3
        }
        cout << i << endl;
    }
    return 0;
}