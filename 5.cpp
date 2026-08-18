#include<iostream>
using namespace std;

class bank{
    string name;
    int account_no;
    float balance;
    public:
    bank(string s1, int a1, float bal){
        this->account_no = a1;
        this->balance = bal;
        this->name = s1;
        }
        void getter(void){
            cout<<"name : "<<this->name << " balance :"<<this->balance<<" account : "<<this->account_no<<endl;
        }
        friend void joint_account(bank, bank);
};
void joint_account(bank a1, bank a2){
    cout<<"Total balance of "<<a1.name <<" and "<<a2.name<<" is "<<a1.balance + a2.balance<<endl;
}

int main(){
    bank c1("CV Raman", 12345, 1000.0);
    bank c2("Deepak", 12346, 2000.0);
    c1.getter();
    c2.getter();
}
