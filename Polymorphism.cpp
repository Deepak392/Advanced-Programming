#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void get(void){
            cout<<"the value of a is : "<<this->a<<endl;
        }
};

class B{
    int b;
    public:
        void get2(void){
            cout<<"the value of b is : "<<this->b<<endl;
        }
};

int main(){
    B b1;
    B* bptr;

    A a1;
    A* aptr;

    bptr = &b1;
    aptr = &a1;
    bptr->get2();
    aptr->get();
    return 0;
}
