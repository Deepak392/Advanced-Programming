#include <iostream>
using namespace std;

class Polynomial {
    int coeff[20];
    int degree;

public:
    // Default constructor
    Polynomial() {
        degree = 0;
        for (int i = 0; i < 20; i++)
            coeff[i] = 0;
    }

    // Parameterized constructor
    Polynomial(int d) {
        degree = d;
        for (int i = 0; i < 20; i++)
            coeff[i] = 0;
    }

    // Function to input polynomial
    void input() {
        cout << "Enter coefficients from highest degree to constant term:\n";

        for (int i = degree; i >= 0; i--) {
            cout << "Coefficient of x^" << i << ": ";
            cin >> coeff[i];
        }
    }

    // Multiply two polynomials
    Polynomial multiply(Polynomial p) {
        Polynomial result(degree + p.degree);

        for (int i = 0; i <= degree; i++) {
            for (int j = 0; j <= p.degree; j++) {
                result.coeff[i + j] += coeff[i] * p.coeff[j];
            }
        }

        return result;
    }

    // Display polynomial
    void display() {
        for (int i = degree; i >= 0; i--) {
            if (coeff[i] != 0) {
                cout << coeff[i];

                if (i > 0)
                    cout << "x";

                if (i > 1)
                    cout << "^" << i;

                if (i > 0)
                    cout << " + ";
            }
        }
        cout << endl;
    }
};

int main() {
    int d1, d2;

    cout << "Enter degree of first polynomial: ";
    cin >> d1;

    Polynomial p1(d1);
    p1.input();

    cout << "\nEnter degree of second polynomial: ";
    cin >> d2;

    Polynomial p2(d2);
    p2.input();

    Polynomial result = p1.multiply(p2);

    cout << "\nResultant Polynomial: ";
    result.display();

    return 0;
}
