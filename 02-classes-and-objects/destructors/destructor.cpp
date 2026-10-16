#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
public:
    complex(int a,int b){
        cout<<"A constructor has created with an address : "<<this<<endl;
    }
    void get_details(void){
        cout<<"x: "<<this->a<<" y: "<<this->b<<"i"<<endl;
    }
    ~complex(void){
        cout<<"A destructor has been called for this object : "<<this<<endl;
    }
};
int main(){
{
    complex c1(2,3),c2(4,5),c3(4,5);
    c1.get_details();
}
    complex c4(2,3);
    return 0;
}
