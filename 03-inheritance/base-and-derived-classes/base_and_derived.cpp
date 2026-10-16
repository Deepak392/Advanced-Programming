#include<iostream>
using namespace std;

class base{
    public:
        void get1(void){
            cout<<"get1 from class base "<<endl;
        }
};

class derived : public base{
    public:
    using base::get1;
        void get1(void){
            cout<<"get1 from derived class "<<endl;
        }

        void get1(int a){
            cout<<"get1 from derived class with parameter "<<a<<endl;
        }
};

int main(){
    base b1;
    b1.get1();
    derived d1;
    d1.get1();
    d1.get1(6);
    return 0;
}
