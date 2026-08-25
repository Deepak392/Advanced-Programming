#include <iostream>
#include <string>
using namespace std;

class bank {
private:
    float amount;
    string name;
    int accNo;

public:
    static float tamm;

    void setter(int a, float b, string c) {
        accNo = a;
        amount = b;
        name = c;

        tamm = tamm + amount;
    }

    void getter_amount(void) {
        cout << "Amount: " << amount << endl;
    }

    void getter_name(void) {
        cout << "Name: " << name << endl;
    }

    void getter_accNo(void) {
        cout << "Account number: " << accNo << endl;
    }

    static void getter_total(void) {
        cout << "Total amount in bank: " << tamm << endl;
    }
};

float bank::tamm = 0;

int main() {
    bank b1, b2;

    b1.setter(101, 5000, "Deepak");
    b2.setter(102, 10000, "Mansi");

    b1.getter_name();
    b1.getter_accNo();
    b1.getter_amount();

    cout << endl;

    b2.getter_name();
    b2.getter_accNo();
    b2.getter_amount();

    cout << endl;

    bank::getter_total();

    return 0;
}
