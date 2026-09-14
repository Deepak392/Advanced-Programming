#include <iostream>
#include "head.hpp"

using namespace std;

int main() {
    complex c1(2, 1);

    c1.get_details();

    cout << "Magnitude = " << c1.magnitude() << endl;

    return 0;
}
