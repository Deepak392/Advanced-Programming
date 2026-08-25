#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    float magnitude() {
        return sqrt(real * real + imag * imag);
    }

    void compare(Complex c) {
        if (magnitude() > c.magnitude())
            cout << "First complex number is greater." << endl;
        else if (magnitude() < c.magnitude())
            cout << "Second complex number is greater." << endl;
        else
            cout << "Both complex numbers are equal." << endl;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    c1.compare(c2);

    return 0;
}
