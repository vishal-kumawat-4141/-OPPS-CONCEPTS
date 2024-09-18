#include <iostream>
using namespace std;
class C2;
class C1
{
    int val_1;
    friend void exchange(C1 &, C2 &);

public:
    void data(int a)
    {
        val_1 = a;
    }
    void display()
    {
        cout << val_1 << endl;
    }
};

class C2
{
    int val_2;
    friend void exchange(C1 &, C2 &);

public:
    void data(int a)
    {
        val_2 = a;
    }
    void display()
    {
        cout << val_2 << endl;
    }
};
// call by refrence value
void exchange(C1 &x, C2 &y)
{
    int temp = x.val_1;
    x.val_1 = y.val_2;
    y.val_2 = temp;
}

int main()
{
    C1 ob1;
    ob1.data(34);
    C2 ob2;
    ob2.data(75);
    exchange(ob1, ob2);
    cout << "The value of val_1 after exchaging :" << endl;
    ob1.display();
    cout << "The value of val_2 after exchaging :" << endl;
    ob2.display();

    return 0;
}