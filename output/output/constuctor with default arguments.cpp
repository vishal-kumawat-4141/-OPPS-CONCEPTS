#include<iostream>
using namespace std;
    class Simple{
        int value1;
        int value2;
        int value3;
        public:
        //here Simple is default constructor and value b ,c is default values
            Simple(int a,int b=5,int c=10){
                value1=a;
                value2=b;
                value3=c;
            }
            void display();
    };

    void Simple::display(){
        cout<<"The data of value1 , value2 and value3 is "<<value1<<","<<value2<<" and "<<value3<<endl;
    }

int main(){
    Simple s1(2);
    s1.display();

    Simple s2(101,60);
    s2.display();

    Simple s3(100,98,90);
    s3.display();
    return 0;
}