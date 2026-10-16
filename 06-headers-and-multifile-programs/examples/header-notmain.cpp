#include <iostream>
#include <cmath>
#include "head.hpp"

using namespace std;

complex::complex(int a, int b) {
    this->a = a;
    this->b = b;
}

void complex::get_details(void) {
    cout << "The complex number is " << a << " + " << b << "i" << endl;
}

void complex::magnitude(void) {
    cout << "Magnitude = " << sqrt(a * a + b * b) << endl;
}
complex operator+(const complex& c1, const complex& c2) {
    return complex(c1.a + c2.a, c1.b + c2.b);
}
