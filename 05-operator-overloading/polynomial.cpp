#include<iostream>
using namespace std;

class polynomial{
    float a,b,c;
    public:
    polynomial(void){
        this->a=0;
        this->b=0;
        this->c=0;
    }

    polynomial(float a,float b){
        this->a=a;
        this->b=b;
        this->c=0;
    }

    polynomial(float a,float b,float c){
        this->a=a;
        this->b=b;
        this->c=c;
    }

    void get_values(void){
        cout<<this->a<<"x^2 + "<<this->b<<"x + "<<this->c<<endl;
    }

    polynomial operator+(const polynomial& scd_obj){
        polynomial x; // temporary object to store addition result
        x.a=this->a+scd_obj.a;
        x.b=this->b+scd_obj.b;
        x.c=this->c+scd_obj.c;
        return x;
    }
};

int main(){
    polynomial p1, p2(3,4), p3(1,2,3);

    p1.get_values();
    p2.get_values();
    p3.get_values();

    polynomial c = p1+p2;

    cout<<"Addition of p1 and p2: "<<endl;
    c.get_values();


    return 0;
}
