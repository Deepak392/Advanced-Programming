
#include <iostream>
using namespace std;

class base {
public:
    void f() {
        cout << "f from base" << endl;
    }

    void g() {
        cout << "g from base" << endl;
    }
};

class derived : public base {
public:
    void f() {
        cout << "f from derived" << endl;
    }

    void g() {
        cout << "g from derived" << endl;
    }
};

int main() {
    base b1;
    derived d1;
    base* bptr;
    derived* dptr;

    // Assign pointers to objects
    bptr = &b1;
    dptr = &d1;

    // Upcasting: Derived* to Base*
    bptr = (base*)dptr;

    bptr->f();
    bptr->g();

    dptr->f();
    dptr->g();

    return 0;
}
