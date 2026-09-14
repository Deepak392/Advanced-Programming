//pure virtual function is a virtual function that is declared by assigning 0 in its declaration. A class that has at least one pure virtual function is called an abstract class. An abstract class cannot be instantiated, but it can be used as a base class. A derived class must override all pure virtual functions of the base class to be instantiable.
#include<iostream>
using namespace std;

class abstract_class{ // any class that has at least one pure virtual function is called abstract class
    public:
    virtual void get_details(void)=0;
};
class derived: public abstract_class{
    public:
    void get_details(void){
        cout<<"get details from derived "<<endl;
    }
};
class derived_2: public abstract_class{
    public:
    void get_details(void){
        cout<<"get details from derived 2 "<<endl;
    }
};

int main(){
    abstract_class* a1;
    derived d1;
    derived_2 d2;
    a1 = &d1;
    a1->get_details();
    a1 = &d2;
    a1->get_details();
    return 0;
}
