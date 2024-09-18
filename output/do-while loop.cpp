#include <iostream>
using namespace std;

int main()
{
    /*
    Syantax:- do{
        c++ statements;

    }while(condition);
    */
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    }
    //    while(false);  //In this case the loop will run in one time so output is 1
    while (i <= 40);
    return 0;
}
/*

int main(){
    int i=6;
    do{
        cout<<i<<endl;
        i=i+6;

    }
    while(i<=60);
        return 0;
}

*/
