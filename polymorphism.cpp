#include<iostream>
using namespace std;

class vehicle{
    public:
    void cost_p_h(int n){
        cout<<"the cost of vehicle for "<<n<<" hours is $"<<n*20<<endl;
    }
};

class bus: public vehicle{
    public:
    void cost_p_h(int n){
        cout<<"the cost of bus for "<<n<<" hours is $"<<n*40<<endl;
    }
};

class car: public vehicle{
    public:
    void cost_p_h(int n){
        cout<<"the cost of car for "<<n<<" hours is $"<<n*50<<endl;
    }
};

int main(){
    vehicle* v1;
    bus b1;
    car c1;
    v1 = &c1;
    v1->cost_p_h(10);
    return 0;
}
