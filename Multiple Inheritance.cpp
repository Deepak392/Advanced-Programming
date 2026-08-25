#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(){
        this->a = 10;
        cout<<"Constructor has been created "<<endl;
    }
    void get_A(void){
        cout<<"a = "<<this->a<<endl;
    }
};
class B{
    int b;
    public:
    B(){
        this->b = 20;
    }
    void get_B(void){
        cout<<"b = "<<this->b<<endl;
    }
};
class C : public A, public B{
    int c;
    public:
    C(){
        this->c = 30;
    }
    void get_C(void){
        cout<<"c = "<<this->c<<endl;
    }
};

int main(){
C c1;
c1.get_A();
c1.get_B();
c1.get_C();
return 0;
}
