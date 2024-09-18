#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age : "<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You are not eligible for buying alcohol"<<endl;
    }
    else if(age==18){
        cout<<"You are  eligible for buying alcohol but show me permission of our head"<<endl;
    
    }
    else if(age<1){
        cout<<"you are not born in the world"<<endl;
    }
    else{
        cout<<"you are eligible for buying alcohol"<<endl;

    }
     return 0;
}