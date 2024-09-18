#include<iostream>
using namespace std;
    class Point{
        int x,y;
        public:
                Point(int a, int b){
                    x=a;
                    y=b;
                }
                void dispaly(){
                    cout<<"The value of points ("<<x<<","<<y<<")"<<endl;
                }
    };
int main(){
        Point p1(5,4);
        p1.dispaly();

        Point p2(8,9);
        p2.dispaly();
        
    
    return 0;
}