#include<iostream>
using namespace std;

class base{
    public:
    virtual void fun1(){
        cout<<"fun1 from base class "<<endl;
    }
};
class derived : public base{
    public:
    void fun1(){
        cout<<"fun1 from derived class "<<endl;
    }
};

int main(){
    base b1;
    base* bptr = &b1;
    derived d1;
    derived* dptr = &d1;
    bptr = (base*)dptr;
    b1.fun1();

    d1.fun1();
    bptr->fun1();
    dptr->fun1();

    return 0;
}
